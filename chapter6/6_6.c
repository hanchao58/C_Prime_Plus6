#include <stdio.h>
#include<string.h>
/*
��ӡһ�����ÿһ��Ϊ������ƽ�����������û��������½硣
*/
int main(){
    int max,min,num;
    printf("�Ͻ�:\n");
    scanf("%d",&max);
    printf("�½�:\n");
    scanf("%d",&min);
    for(num = min;num*num*num<max;num++)
    {
        printf("%4d | %16d | %20ld |\n",num,num*num,num*num*num);
    }
    
}