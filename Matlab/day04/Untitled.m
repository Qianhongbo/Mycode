%%
%二维坐标系变换及绘图
T=SE2(0,0,30);%建立变换 x=0 y=0 theta=30°
trplot2(T, 'frame', '1', 'color', 'b','axis',[-3 3 -3 3]);%绘图，
% 名字：{1} 颜色：蓝色 坐标轴范围[-5 5 -5 5]
hold on;
T = SE2(1,2,60);%生成其次矩阵对象，参数x位移，y位移，逆时针旋转角度，
%SE2.T表示其其次变换矩阵
trplot2(T, 'frame', '2', 'color', 'r');%绘制变换坐标系
P = [1;1];%一点p
plot_point(P,'label','P');%画一点P
P1 = homtrans(T.T,P);%计算P在T中表达   T.T为SE2对象转matrix,才能计算
plot_point(P1,'label','P1');
hold off
%%
%三维坐标系变换及绘图
R=rotx(30)*roty(30)*rotz(30);%产生3*3旋转矩阵
trplot(R)%绘制坐标系
tranimate(R)%产生变换动画
R=eul2r(30,30,30);%欧拉三角度表示法ZYZ,输出旋转矩阵，输入角度,文档错了
tr2eul(R,'deg')%欧拉三角度反变换，输出角度
R=rpy2r(30,30,30,'xyz');%卡尔单角to旋转矩阵，XYZ,输入角度
tr2rpy(R)%逆变换
%三维齐次变换,旋转＋位移
R1=eul2r(0,0,0);
R2=eul2r(90,90,90);
position1=SE3(R1,[0 0 0]);
position2=SE3(R2,[1 2 3]);
tranimate(position1.T,position2.T);
%更常用方法：
Trans = transl(0.4,0.2,0)*trotx(pi);%位移*旋转,创建齐次变换矩阵
%%
%补充：特征值看出旋转矩阵旋转轴
%[v,lambda]=eig(rpy2r(30,30,30));%lambda为1对应的特征向量为转轴
R=rpy2r(30,30,30,'xyz');%卡尔单角to旋转矩阵，XYZ,输入角度
[theta,v]=tr2angvec(R);%得到轴线与转角
axis([-1 1 -1 1 -1 1])  %设置坐标系范围
line([0 v(1)],[0 v(2)],[0 v(3)])%画出轴线
hold on;
tranimate(R)%产生变换动画
%%
%轨迹 从s=0 平滑移动至s=1的方法
%平滑一维轨迹
%使用的轨迹方程 s=At^5+Bt^4+Ct^3+Dt^2+Et^1+F
%通过导入开始结束时速度加速度为零约束条件求解ABCDEF
[s,sd,sdd]=tpoly(0,1,50);%返回轨迹为0~1差值50个点,[路程，速度，加速度]
plot([s sd sdd])%绘制
[s,sd,sdd]=lspb(0,1,50);%另一种轨迹方法，加减速较快，比较理想
plot([s sd sdd])%绘制
%二维轨迹平滑
s=mtraj(@tpoly,[0 2],[1 -1],50);
plot(s)
s=mtraj(@lspb,[0 2],[1 -1],50);
plot(s)
%基于中间点生成多段轨迹
via=[4 1;4 4;5 2;2 5];%轨迹点
q=mstraj(via,[2 1],[],[4 1],0.05,5);%轨迹点，每轴最大速度，
%每段运动时间，每轴起点坐标，采样时间，加速时间
plot(q)
%三维轨迹生成
%仅旋转
R0=[0 0 0];
R1=[90 90 90];
rpy=mtraj(@tpoly,R0,R1,50);
tranimate(rpy2tr(rpy));
%旋转+位移
R1=eul2r(0,0,0);%旋转矩阵
R2=eul2r(90,90,90);
position1=SE3(R1,[0 0 0]);%构造三维齐次变换矩阵
position2=SE3(R2,[1 2 3]);
s=trinterp(position1,position2,[0:49]/49);%平移部分线性插值，旋转部分四元数
plot(s)
%%
%机械臂建模与正运动学
%创建DH参数
L(1)=Link([0 0 1 0 0]);%创建连杆模型，参数：theta d a alpha 旋转轴
L(2)=Link([0 0 1 0 0]);
two_link=SerialLink(L,'name','two_link');%构建模型
two_link.fkine([0 0])%计算证运动学位姿，输入theta0=0;theta1=0，
% 结果为SE3对象，SE3.T得到其其次变换矩阵
%绘图
two_link.plot([0 0]);%对位置[0 0]画位姿图
two_link.plot([pi/2 0]);%对位置[pi/2 0]画位姿图
%%
%逆运动学
mdl_puma560%调出puma560 DH模型作为实验对象
T = p560.fkine([0 0 0 0 0 0]);%生成一个位姿
qi=p560.ikine6s(T);%逆运动学计算，封闭解
i=5;
while(i)%对比结果
    pause(1)
    p560.plot([0 0 0 0 0 0])
    pause(1)
    p560.plot(qi)
    i=i-1;
end
%%
%运动学轨迹
p560 = mdl_puma560;%调出puma560 DH模型作为实验对象
t=[0:0.05:2];%两秒完成轨迹，步长0.05
%关节运动（产生两位置间路径，结果表达为一系列中间点的关节角度）
%产生位姿矩阵法1：直接给出关节角度
% T1 = p560.fkine([0 0 0 0 0 0]);%生成一个位姿
% T2 = p560.fkine([pi 0 0 0 0 0]);%生成一个位姿
%产生位姿矩阵法2：描述位置
T1 = transl(0.4,0.2,0)*trotx(pi);%位移*旋转,创建齐次变换
T2 = transl(0.4,-0.2,0)*trotz(pi/2);
q=p560.jtraj(T1,T2,t);%输入SE3 or 4*4变换矩阵，生成轨迹
p560.plot(q)%绘制轨迹
hold on
%笛卡尔运动（笛卡尔空间中直线运动,生成从SE3空间两点间直线的
%一系列中间位置，结果表达为4*4齐次换矩阵
Ts=ctraj(T1,T2,length(t));
% y=p560.ikine(Ts);
% p560.plot(y);
%%