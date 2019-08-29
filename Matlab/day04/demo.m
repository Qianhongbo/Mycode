%%
close all
clear;
p560_1 = mdl_puma560;
p560_1.base = [-0.5 0 0];
p560_2 = mdl_puma560;
p560_2.base = [0.5 0 0];
p560_1.plot([0 0 0 0 0 0])
p560_2.plot([0 0 0 0 0 0])
%%
close all
clear;
d = 0.1;
plot3([0 0],[-1 1],[0 0])
p560_1 = mdl_puma560;
p560_1.name = 'puma1';
p560_1.base = [-0.6 0 0];
p560_2 = mdl_puma560;
p560_2.name = 'puma2';
p560_2.base = [0.6 0 0];
t=0:0.05:2;
T1 = transl(-0.4,0.2,0.1);
T2 = transl(0,-0.5,d);
T3 = transl(0.2,-0.2,-0.1);
T4 = transl(0,-0.5,-d);
q=p560_1.jtraj(T1,T2,t);
s=p560_2.jtraj(T3,T4,t);
p560_1.plot(q);
hold on;
p560_2.plot(s);
hold on;
%%
close all
clear;
d = 0.1;
plot3([0 0],[-1 1],[0 0])
p560_1 = mdl_puma560;
p560_1.name = 'puma1';
p560_1.base = [-0.6 0 0];
p560_2 = mdl_puma560;
p560_2.name = 'puma2';
p560_2.base = [0.6 0 0];
t=0:0.05:2;
T1 = transl(-0.4,0.2,0.1);
T2 = transl(0,-0.5,d)*trotx(180);
T3 = transl(0.2,-0.2,-0.1);
T4 = transl(0,-0.5,-d);
q=p560_1.jtraj(T1,T2,t);
s=p560_2.jtraj(T3,T4,t);
p560_1.plot(q);
hold on;
p560_2.plot(s);
hold on;
%%
close all
clear;
d = 0.1;
plot3([0 0],[-1 1],[0 0])
p560_1 = mdl_puma560;
p560_1.name = 'puma1';
p560_1.base = [-0.6 0 0];
p560_2 = mdl_puma560;
p560_2.name = 'puma2';
p560_2.base = [0.6 0 0];
t=0:0.05:2;
T1 = transl(-0.4,0.2,0.1);
T2 = transl(0,-0.4,d)*trotx(180);
T3 = transl(0.2,-0.2,-0.1);
T4 = transl(0,-0.4,-d);
T5 = transl(0,-0.4,d);
T6 = transl(0,0.3,d);
T7 = transl(0,-0.4,-d);
T8 = transl(0,0.3,-d);
q=p560_1.jtraj(T1,T2,t);
s=p560_2.jtraj(T3,T4,t);
m=ctraj(T5,T6,50);
n=ctraj(T7,T8,50);
y=p560_1.ikine(m);
f=p560_2.ikine(n);
p560_1.plot(q);
hold on;
p560_2.plot(s);
hold on;
p560_1.plot(y);
hold on;
p560_2.plot(f);
hold on;
%%
close all
clear;
d = 0.1;
plot3([0 0],[-1 1],[0 0])
p560_1 = mdl_puma560;
p560_1.name = 'puma1';
p560_1.base = [-0.6 0 0];
p560_2 = mdl_puma560;
p560_2.name = 'puma2';
p560_2.base = [0.6 0 0];
t=0:0.05:2;
T1 = transl(-0.4,0.2,0.1);
T2 = transl(0,-0.5,d)*trotx(180);
T3 = transl(0.2,-0.2,-0.1);
T4 = transl(0,-0.5,-d);
q=p560_1.jtraj(T1,T2,t);
s=p560_2.jtraj(T3,T4,t);
p560_1.plot(q);
hold on;
p560_2.plot(s);
hold on;
%%
close all
clear;
d = 0.1;
plot3([0 0],[-1 1],[0 0])
p560_1 = mdl_puma560;
p560_1.name = 'puma1';
p560_1.base = [-0.6 0 0];
p560_2 = mdl_puma560;
p560_2.name = 'puma2';
p560_2.base = [0.6 0 0];
t=0:0.05:2;
%����puma1��е���ƶ���ָ���㣬����z��ָ���µ���α任����
T1 = transl(-0.4,0.2,0.1);
T2 = transl(0,-0.4,d)*trotx(180);
%puma2��е���ƶ���ָ���㣬z��ָ���ϵ���α任����
T3 = transl(0.2,-0.2,-0.1);
T4 = transl(0,-0.4,-d);
%����jtraj������������е���˶���ָ����
q=p560_1.jtraj(T1,T2,t);
s=p560_2.jtraj(T3,T4,t);
%�ƶ���ָ�������ֱ���ƶ�
T5 = transl(0,-0.3,d)*trotx(180);%puma1��ֱ���ƶ�
T6 = transl(0,-0.3,-d);%puma2��ֱ���ƶ�
% m=ctraj(T2,T5,50);
n=ctraj(T4,T6,length(t));
% y=p560_1.ikine(m);
f=p560_2.ikine(n);
%��ͼ
p560_1.plot(q);
hold on;
p560_2.plot(s);
hold on;
% p560_1.plot(y);
% hold on;
p560_2.plot(f);
hold on;