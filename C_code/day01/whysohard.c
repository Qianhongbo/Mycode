#include <stdio.h>

int getvalue1(void){
    int a = 0;
    a++;
    return a;
}

int getvalue2(void){
    static int b = 0;
    b++;
    return b;
}

int main(){
    int a,b;
    for(int i = 10; i >0; i--){
        a = getvalue1();
        b = getvalue2();
    }
    printf("%d, %d", a, b);
    getchar();
    return 0;
}