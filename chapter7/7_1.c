#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '#'
/*
    ¼ÆËã¿Õ¸ñ£¬»»ÐÐ·û£¬Ê£Óà×Ö·û
*/
int main(){
    int n_space=0;
    int n_switch=0;
    int n_others=0;
    char c;
    while ((c = getchar()) != STOP) 
    {
        if(c == ' ')
            n_space++;
        else if(c == '\n')
            n_switch++;
        else
            n_others++;
    }
    printf("space:%d,swtich:%d,other_char:%d",n_space,n_switch,n_others);
    return 0;
}