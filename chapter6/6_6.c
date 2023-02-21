#include <stdio.h>
#include<string.h>
/*
打印一个表格，每一行为整数、平方、立方，用户输入上下界。
*/
int main(){
    int max,min,num;
    printf("上界:\n");
    scanf("%d",&max);
    printf("下界:\n");
    scanf("%d",&min);
    for(num = min;num*num*num<max;num++)
    {
        printf("%4d | %16d | %20ld |\n",num,num*num,num*num*num);
    }
    
}