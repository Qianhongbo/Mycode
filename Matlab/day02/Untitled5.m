A=[0 -1 4;9 -14 25;-34 49 64]; 
B=zeros(3,3);
for i = 1:9
    if A(i) < 0
        A(i) = -A(i);
    end
    B(i) = A(i);
end

disp(B);
