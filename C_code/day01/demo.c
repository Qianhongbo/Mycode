#include <stdio.h>

int getvalue1(void){
    int a;
    for(int i = 10; i > 0; i--)
    {
        a = 0;
        a++;      
    }
    return a;
    
}
int getvalue2(void){
    int b;
    for(int i = 10; i > 0; i--)
    {
        static int b = 0;
        b++;
    }
    return b;
}

// int getvalue2(void){
//     for(int i = 10; i > 0; i--){
//         static int b = 0;
//         b++;
//         return b;
//     }
// }

int main(){

    int c = getvalue1();
    int d = getvalue2();

    printf("%d, %d", c, d);
    getchar();
    return 0;
}
