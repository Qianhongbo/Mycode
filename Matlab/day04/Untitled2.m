puma1 = mdl_puma560;
t = 0:0.05:2;
q1 = transl(0.2,0,0);
q2 = transl(0.5,0,0);
q3 = q2*trotx(180);
m = puma1.jtraj(q1,q3,t);
puma1.plot(m)