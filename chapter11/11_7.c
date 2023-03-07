#include <stdio.h>
#include<string.h>
#define MAX 50

/*Êı×éÆ´½Ó*/
char s_gets(char *st, int n);

char *mystrncpy(char *str1,char *str2,int n);

int main(){
    char c;
    char arr[MAX];
    char arr2[MAX];

    s_gets(arr,MAX);
    s_gets(arr2,MAX);
    puts(arr);
    puts(arr2);

    mystrncpy(arr , arr2, 10);
    puts(arr);
    return 0;
}

char s_gets(char *st , int n){
    char ret_val;
    int i = 0;
    if(fgets(st ,n , stdin)){
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return 1;
}

char *mystrncpy(char *str1,char *str2,int n)
{   
    int i = 0;
    str1 += strlen(str1);
    while(*str2 && i < n)
    {
            *str1++ = *str2;
            str2++;
            i++;
    }
}
