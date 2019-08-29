close all
clear;
p560_1 = mdl_puma560;
p560_1.name = 'puma1';
p560_1.base = [0 0 0];
t=0:0.05:2;
%����puma1��е���ƶ���ָ���㣬����z��ָ���µ���α任����
T1 = transl(-0.4,-0.2,0.1);
T2 = transl(-0.2,-0.4,0.6);
%����jtraj������������е���˶���ָ����
q=p560_1.jtraj(T1,T2,t);
%�ƶ���ָ�������ֱ���ƶ�
T5 = transl(-0.2,-0.4,0.4);%puma1��ֱ���ƶ�
m=ctraj(T2,T5,50);
y=p560_1.ikine(m);
%��ͼ
p560_1.plot(q);
hold on;
p560_1.plot(y);
hold on;