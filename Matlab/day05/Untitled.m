close all
clear;
p560_1 = mdl_puma560;
p560_1.name = 'puma1';
p560_1.base = [0 0 0];
t=0:0.05:2;
%计算puma1机械臂移动到指定点，并将z轴指向朝下的齐次变换矩阵
T1 = transl(-0.4,-0.2,0.1);
T2 = transl(-0.2,-0.4,0.6);
%利用jtraj函数让两个机械臂运动到指定点
q=p560_1.jtraj(T1,T2,t);
%移动到指定点后沿直线移动
T5 = transl(-0.2,-0.4,0.4);%puma1沿直线移动
m=ctraj(T2,T5,50);
y=p560_1.ikine(m);
%画图
p560_1.plot(q);
hold on;
p560_1.plot(y);
hold on;