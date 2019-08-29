P = 104;
I = 0;
D = 100;
close all;
%1s���е�������
times = 20;
%���е�����
second = 20;
%������е�ʱ����
d_time = 1/times;
%���־�
l = 0.115;
%��ʼ����
v0 = 0.2;
w0 = 0;
av = 0.5;
aw = 10;

%����ٶ�m/s
maxSpeed = 0.3;
%ת��뾶m
r = 0.065;

%�洢ʵ��λ��
pose = zeros(second*times,2);
%λ����Ϣ
x = 0;y=0;phi=0;
%�趨����
w = 1.2;
v = w*r;

circlePoint = [0,r];

%�洢����
dis = zeros(1,second*times);
%�洢����֮��
d_dis = zeros(1,second*times);
%�洢����ǰ��
dd_dis = zeros(1,second*times - 1);
%�洢�������
e_dis = zeros(1,second*times);

out = zeros(1,second*times);
ww = zeros(1,second*times);
vv = zeros(1,second*times);
for i = 1:second*times
    pose(i,1) = x;
    pose(i,2) = y;
    
    %�������PID����õ�����
    dis(i) = norm([x-circlePoint(1,1),y - circlePoint(1,2)]);
    d_dis(i) = dis(i) - r;
    
    %����PID������Ҫ��������
    if i>1
        dd_dis(i) = d_dis(i)-d_dis(i-1);
        e_dis(i) = e_dis(i-1) + d_dis(i);
        out_cur =P*d_dis(i) + I*e_dis(i) + D*dd_dis(i);
        out(i) = out_cur;
        %��ֵ
        w = v/r + out_cur;
        

        %����޷�
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
        
        %����λ��
        phi = phi + w0*d_time;
%         if phi>pi
%             break;
%         end
        if pose(i,2) - pose(i-1,2) < 0
            break;
        end
        s = v*d_time;
        x = x + s*cos(phi);
        y = y + s*sin(phi);
        
        %�����ڲ���������
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
    end
    
end

% ��ͼ����ӡ
axis equal;
hold on;
%��һ����׼Բ
theta = 0:2*pi/3600:2*pi;
circle1 = 0+r*cos(theta);
circle2 = 0.065+r*sin(theta);
plot(circle1,circle2,'m','Linewidth',1);
title('�켣�Ա�');
text(0,r,'*');
hold on;
plot(circlePoint(:,1),circlePoint(:,2),'*');
plot(pose(:,1),pose(:,2),'blue');
% figure(2);
% ylim([0.06,0.07]);
% plot(dis);
% title("ʵ�ʰ뾶");
figure(3);
plot(d_dis);
title("�뾶��");
% ylim([-2*max(abs(d_dis)),2*max(abs(d_dis))]);
% figure(4);
% plot(ww);
% title("w");
% figure(5);
% plot(vv);
% title("v");
fprintf("P: %d ,I: %d ,D:%d ,max_d: %d  average_d:% d  var_w: %d \n",P,I,D,max(abs(d_dis)),mean(abs(d_dis)),var(ww));

