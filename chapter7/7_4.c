#include<stdio.h>
#define STOP '#'
/*�滻��Ϊ�����滻���滻Ϊ����*/
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
    printf("�滻����Ϊ:%d",cnt);
    return 0;
}