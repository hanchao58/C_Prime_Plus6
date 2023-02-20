#include <stdio.h>
#include<string.h>
/*
 存入26个小写字母，读取出来
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