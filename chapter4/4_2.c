#include<stdio.h>
#include<string.h>
/*打印名字，宽度为20左右两端，比姓名宽3的字段中打印*/
int main(){
    char name[30];
    printf("Please input name:");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%-*s\"\n",strlen(name)+3,name);
}