#include<stdio.h>
#define STOP '#'
/*替换。为！，替换！替换为！！*/
int main(){
    int cnt = 0;
    char c;
    while ((c = getchar()) != STOP){
        if(c == '.'){
            putchar("!");
            cnt++;
        }
        else if(c == '!'){
            putchar("!");
            putchar("!");
            cnt++;
        }
        else
            printf("%c",c);
    }
    printf("替换次数为:%d",cnt);
    return 0;
}