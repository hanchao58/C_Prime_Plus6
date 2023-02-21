#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
输出2的前八次幂的数组
*/
int main(){
    int num[8];
    int  i,j=0;
    for ( i = 0; i < 8; i++)
    {
        num[i] = pow(2,i+1);
    }
    do
    {
        printf("%d ",num[j]);
        j++;
    } while (j != 8);
    
}