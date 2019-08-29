%%
tic
for ii = 1:2000
    for jj = 1:2000
        A(ii,jj) = ii+jj;
    end
end
toc

%%
tic
A = zeros(2000,2000);
for ii = 1:1000
    for jj = 1:1000
        A(ii,jj) = ii+jj;
    end
end
toc
