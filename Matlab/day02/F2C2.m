function y=F2C()
while true
x=input('Temperature in F');
if (isempty(x))
break
end
y=(x-32).*(5/9);
disp('-->Temperature in C =',num2str(y));
end
clear y;