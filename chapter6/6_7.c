#include<stdio.h>
#include<string.h>
/*Êä³öµ¥´Êµ¹Ðò*/
int main(){
    char word[50];
    int i,length;
    printf("Please input a word:\n");
    scanf("%s",word);
    length = strlen(word);
    for(i=length-1;i>=0;i--)
        printf("%c",word[i]);
        return 0;
}