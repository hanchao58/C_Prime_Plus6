#include<stdio.h>
#include<stdlib.h>
/*�����������ֻ����������˻�*/
int main(){
    float a,b;
    printf("Please input two float(a b):\n"); 
    while(scanf("%f %f",&a,&b) == 2)//scanf����ֵ���������������붨��ƥ�䣬����ƥ��ɹ�������
    {
        printf("%f",(a-b)/(a*b));
    }
    return 0;
}