#include<stdio.h>
#include<stdlib.h>
/*
������޵����޵���������ƽ����
*/
int main(){
    int max,min,sum_sq,i;
    printf("�Ͻ�:\n");
    scanf("%d",&max);
    printf("�½�:\n");
    scanf("%d",&min);
    while (min<=max)
    {
        for(i=min;i<max+1;i++)
        {
            sum_sq+= i*i;
        }
        printf("the sums from %d to %d is %ld\n", min*min,max*max,sum_sq);
        printf("Enter next set of limites:\n");
        scanf("%d %d",&max,&min);
    }
    printf("done\n");
}