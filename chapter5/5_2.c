#include<stdio.h>
/*打印输入数到比这个数大10的所有整数*/
int main(){
    int num,i,max;
    scanf("%d",&num);
    i=num-1;
    while(i++<num+10){
        printf("%d ",i);
    }
}