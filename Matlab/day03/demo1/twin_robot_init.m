function [ UR1 UR2 ] = twin_robot_init(Tij)

if nargin < 1
fprintf('ʹ������ѧ��������˫����ʼλ������');
Tij=[1 0 0 0;
     0 1 0 0.7;% modified according to the dairy in 2017/4/7
     0 0 1 0;
     0 0 0 1];
end

UR1=UR_init;
mdl_puma560.name='robot 1';
UR2=UR_init;
mdl_puma560.name='robot 2';

 initAng=[0 -pi/2 0 pi/2 0 0];
 UR1.plot(initAng)
 hold on
 UR2.plot(initAng)
 hold on