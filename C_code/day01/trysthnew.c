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
    int c,d;
    for(int i = 10; i >0; i--){
        int c = getvalue1();
        int d = getvalue2();
    }
    printf("%d, %d", c, d);
    getchar();
    return 0;
}