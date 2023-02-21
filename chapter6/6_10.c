#include<stdio.h>
#include<stdlib.h>
/*
输出上限到下限的所有整数平方和
*/
int main(){
    int max,min,sum_sq,i;
    printf("上界:\n");
    scanf("%d",&max);
    printf("下界:\n");
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