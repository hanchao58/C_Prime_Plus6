#include<stdio.h>
#include<string.h>
/*��ӡ���֣����Ϊ20�������ˣ���������3���ֶ��д�ӡ*/
int main(){
    char first_name[30];
    char last_name[30];
    printf("Please input name:");
    scanf("%s",first_name);
    printf("Please input name:");
    scanf("%s",last_name);    
    printf("\"%s\"",first_name);
    printf("\"%s\"\n",last_name);
    printf("\"%-*d\"",strlen(first_name),strlen(first_name));
    printf("\"%-*d\"\n",strlen(last_name),strlen(last_name));
}