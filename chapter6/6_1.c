#include <stdio.h>
#include<string.h>
/*
 ����26��Сд��ĸ����ȡ����
*/
int main(){
    char str[25];
    int i,n;
    int ascii=97;
    for(n=0;n<26;ascii+=1,n++)
    str[n]=ascii;
    for(i=0;i<26;i++)
    printf("%c ",str[i]);
    return 0;
}