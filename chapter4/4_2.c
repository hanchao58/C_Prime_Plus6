#include<stdio.h>
#include<string.h>
/*��ӡ���֣����Ϊ20�������ˣ���������3���ֶ��д�ӡ*/
int main(){
    char name[30];
    printf("Please input name:");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%-*s\"\n",strlen(name)+3,name);
}