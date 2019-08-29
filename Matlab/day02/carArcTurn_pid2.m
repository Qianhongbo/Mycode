function carArcTurn_pid2(P,I,D)
close all;
P = 0;
I = 0;
D = 0;
%1s进行的运算数
times = 20;
%运行的秒数
second = 200;
%计算进行的时间间隔
d_time = 1/times;
%半轮距
l = 0.115;
%初始参数
v0 = 0.2;
w0 = 0;
av = 0.5;
aw = 10;

%存储左右轮的速度
vv1 = zeros(1,second*times);
vv2 = zeros(1,second*times);

%最大速度m/s
maxSpeed = 0.3;
%转弯半径m
r = 0.065;

%存储实际位置
pose = zeros(second*times,2);
%位置信息
x = 0;y=0;phi=0;
%设定参数
v = 0.2;

circlePoint = [0,r];

%存储距离
dis = zeros(1,second*times);
%存储距离之差
d_dis = zeros(1,second*times);
%存储距离前差
dd_dis = zeros(1,second*times - 1);
%存储距离积分
e_dis = zeros(1,second*times);

out = zeros(1,second*times);
ww = zeros(1,second*times);
vv = zeros(1,second*times);
for i = 1:second*times
    pose(i,1) = x;
    pose(i,2) = y;
    
    %计算距离差，PID计算得到增量
    dis(i) = norm([x-circlePoint(1,1),y - circlePoint(1,2)]);
    d_dis(i) = dis(i) - r;
    


    [mm1,ii1]=max(vv1);
    %计算PID至少需要两次数据
    if i > ii1
        dd_dis(i) = d_dis(i)-d_dis(i-1);
        e_dis(i) = e_dis(i-1) + d_dis(i);
        out_cur =P*d_dis(i) + I*e_dis(i) + D*dd_dis(i);
        out(i) = out_cur;
        %赋值
        w = v/r + out_cur;
        

        %输出限幅
       v1 = v + l*w;
       v2 = v - l*w;
       if abs(v1)>maxSpeed
           w = w/abs(v1/maxSpeed);
           v = v/abs(v1/maxSpeed);
       end
       
        if abs(v2)>maxSpeed
           w = w/abs(v2/maxSpeed);
           v = v/abs(v2/maxSpeed);
        end
       
         ww(i) = w;
         vv(i) = v;
        
        %计算位置
        phi = phi + w0*d_time;
%         if phi >= (2*pi) 
%             break;
%         end
        s = v*d_time;
        x = x + s*cos(phi);
        y = y + s*sin(phi);
        
        %机器内部调整策略
        if(v>v0)
            v0 = v0+d_time*av;
        else
            v0 = v0-d_time*av;
        end
        if(w>w0)
            w0 = w0+d_time*aw;
        else
            w0 = w0-d_time*aw;
        end
        %定义左右轮速度
        v1 = v0 + l*w0;
        v2 = v0 - l*w0;
        vv1(1,i) = v1;
        vv2(1,i) = v2;
    end
end

% 画图、打印
axis equal;
hold on;
%画一个标准圆
theta = 0:2*pi/3600:2*pi;
circle1 = 0+r*cos(theta);
circle2 = 0.065+r*sin(theta);
plot(circle1,circle2,'m','Linewidth',1);
title('轨迹对比');
hold on;
plot(circlePoint(:,1),circlePoint(:,2),'*');
plot(pose(:,1),pose(:,2),'blue');
text(pose(ii1,1),pose(ii1,2),'X','color','g');
figure(2);
ylim([0.06,0.07]);
plot(dis);
title("实际半径");
figure(3);
plot(d_dis);
title("半径差");
ylim([-2*max(abs(d_dis)),2*max(abs(d_dis))]);
figure(4);
plot(ww);
title("w");
figure(5);
plot(vv);
title("v");
figure(6);
plot(vv1);
hold on;
plot(vv2);
title('两轮线速度对比');
fprintf("P: %d ,I: %d ,D:%d ,max_d: %d  average_d:% d  var_w: %d \n",P,I,D,max(abs(d_dis)),mean(abs(d_dis)),var(ww));

