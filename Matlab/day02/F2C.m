function F2C(F)
prompt = '������һ�������¶ȣ� ';
while 1
    F = input(prompt);
    if isempty(F)
        break;
    else
        C = (F - 32)./ 1.8;
        fprintf('--> �����������¶�Ϊ��%3.1f\n',C);
    end
end

