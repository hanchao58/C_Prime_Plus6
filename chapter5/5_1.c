#include<stdio.h>
/*whileѭ��д������ת��ΪСʱ��ʱ��*/
int main(){
    int time;
    const int  h_min=60;
    scanf("%d",&time);
    while(time){
        printf("time: %d:%d\n",time / h_min,time % h_min);
        scanf("%d",&time);
    }
    return 0;
}