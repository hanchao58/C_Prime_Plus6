#include <stdio.h>
#include<string.h>
#define MAX 50

/*数组查找函数*/
char s_gets(char *st, int n);

char *find_char(char ch, char *str);

int main(){
    char c;
    char arr[MAX];
    char *str;
    s_gets(arr,MAX);
    puts(arr);
    if((str = find_char('a',arr)) != NULL){
            printf("FOUND!\n");
            printf("NO.%d",(str-arr)/sizeof(char)+1);
    }
    else
        printf("NOT FOUND");
    
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

char *find_char(char ch, char *str)
{
    while (*str)
    {   
        if(*str == ch)
            return str;
        str++;
    }
    return NULL;
}
