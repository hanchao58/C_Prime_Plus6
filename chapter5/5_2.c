#include<stdio.h>
/*��ӡ�����������������10����������*/
int main(){
    int num,i,max;
    scanf("%d",&num);
    i=num-1;
    while(i++<num+10){
        printf("%d ",i);
    }
}