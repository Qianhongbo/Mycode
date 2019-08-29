function carArcTurn_pid(P,I,D)
close all;
%1s���е�������
times = 20;
%���е�����
second = 20000;
%������е�ʱ����
d_time = 1/times;
%Ĭ�ϲ���
phi = 0;
x = 0;
y = 0;
t = 0.001;
%��ʼ����
v0 = 0.1;
w0 = 0;
av = 0.5;
aw = 10;
%ת��뾶
r = 0.065;
%���־�
l = 0.115;
%�趨����
v = 0.1;
w = v/r;
%�洢Ŀǰ��λ��
pose = zeros(second*times,2);
%�洢�����ֵ��ٶ�
vv1 = zeros(1,second*times);
vv2 = zeros(1,second*times);
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
circlePoint = [0,r];

for i = 1:4000
    pose(i,1) = x;
    pose(i,2) = y;
    
    %�������PID����õ�����
    dis(i) = norm([x-circlePoint(1,1),y - circlePoint(1,2)]);
    d_dis(i) = dis(i)-r;
    
    %����PID������Ҫ��������
    if i>1
        dd_dis(i) = d_dis(i)-d_dis(i-1);
        e_dis(i) = e_dis(i-1) + d_dis(i);
        out_cur =P*d_dis(i) + I*e_dis(i) + D*dd_dis(i);
        out(i) = out_cur;
        %��ֵ
        w = v/r + out_cur;
        
        ww(i) = w;
        vv(i) = v;
    
    %λ�� ����
    phi = phi+ w0*t;
    s = v0*t;
    x = x+s*cos(phi);
    y = y+s*sin(phi);
       
    %�����ڲ���������
    if(v>v0)
        v0 = v0+t*av;
    elseif(v == v0)
        v0 = v0+0;
    else
        v0 = v0-t*av;
    end
    if(w>w0)
        w0 = w0+t*aw;
    elseif(w == w0)
        w0 = w0+0;
    else
        w0 = w0-t*aw;
    end
    v1 = v0 + l*w0;
    v2 = v0 - l*w0;
    vv1(1,i) = v1;
    vv2(1,i) = v2;
    [mm1,ii1]=max(vv1);
    [mm2,ii2]=min(vv2);
    ra = v0/w0;
end




figure;
%��һ����׼Բ
theta = 0:2*pi/3600:2*pi;
circle1 = 0+r*cos(theta);
circle2 = 0.065+r*sin(theta);
plot(circle1,circle2,'m','Linewidth',1);
title('�켣�Ա�');
hold on;

plot(circlePoint(:,1),circlePoint(:,2),'*');
plot(pose(:,1),pose(:,2));
text(pose(ii1,1),pose(ii1,2),'X','color','g');

figure(2);
plot(dis);

figure(3);
plot(d_dis);

figure(4);
plot(vv1);
hold on;
plot(vv2);
title('�������ٶȶԱ�');
fprintf("max_d: %d  average_d:% d \n",max(abs(d_dis)),mean(abs(d_dis)));


