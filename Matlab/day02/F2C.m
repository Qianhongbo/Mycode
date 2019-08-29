function F2C(F)
prompt = '请输入一个华氏温度： ';
while 1
    F = input(prompt);
    if isempty(F)
        break;
    else
        C = (F - 32)./ 1.8;
        fprintf('--> 计算后的摄氏温度为：%3.1f\n',C);
    end
end

