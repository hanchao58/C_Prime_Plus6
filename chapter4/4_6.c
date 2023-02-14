#include<stdio.h>
#include<string.h>
/*打印名字，宽度为20左右两端，比姓名宽3的字段中打印*/
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