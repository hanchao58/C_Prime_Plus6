#include<stdio.h>
#define STOP '#'

int main(){
    char c;
    int i=0;
    while ((c=getchar()) != STOP)
    {
        if(++i % 8 == 0)
            printf("\n");
        else if(c == '\n')
            printf(" ");
        else
            printf("chars-ASICC:%c-%d ",c,c);
    }
    return 0;
}
