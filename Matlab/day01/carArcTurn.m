close all;

phi = 0;
x = 0;
y = 0;
t = 0.001;

%��ʼ����
v0 = 0.2;
w0 = 0;
av = 0.5;
aw = 10;

%ת��뾶
r = 0.065;

%���־�
l = 0.115;

%�趨����
v = 0.15;
w = v/r;

circlePoint = [0,r];
pose = zeros(2000,2);
dis =  zeros(1,2000);
d_dis = zeros(1,2000);
vv1 = zeros(1,2000);
vv2 = zeros(1,2000);
for i = 1:4000
    pose(i,1) = x;
    pose(i,2) = y;
    dis(i) = norm([x-circlePoint(1,1),y - circlePoint(1,2)]);
    d_dis(i) = dis(i)-r;
    
    %λ�� ����
    phi = phi+ w0*t;
    s = v0*t;
    x = x+s*cos(phi);
    y = y+s*sin(phi);
       
    %�����ڲ���������
    if(v>v0)
        v0 = v0+t*av;
    else
        v0 = v0-t*av;
    end
    if(w>w0)
        w0 = w0+t*aw;
    else
        w0 = w0-t*aw;
    end
    v1 = v0 + l*w0;
    v2 = v0 - l*w0;
    vv1(1,i) = v1;
    vv2(1,i) = v2;
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

