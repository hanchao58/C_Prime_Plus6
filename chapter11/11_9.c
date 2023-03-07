#include <stdio.h>
#include<string.h>
#define MAX 50

/*数组反序替换函数*/
char *s_gets(char *st, int n);

void reverse_char(char str[]);

int main(){
    char c;
    char arr[MAX];
    char *str;   
    s_gets(arr,MAX);
    puts(arr);
    reverse_char(arr);
    puts(arr);
    return 0;
}

char *s_gets(char *st , int n){
    int i = 0;
    char *ret_val;
    ret_val = fgets(st ,n , stdin);
    if(ret_val){
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}

void reverse_char( char str[] )
{
    int i;
    char tmp;
    int n = strlen(str);
    for (i = 0; i < n; i++,n--)
    {
        tmp = str[i];
        str[i] = str[n - 1];
        str[n - 1] = tmp;
    }
}