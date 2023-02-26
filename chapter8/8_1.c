#include<stdio.h>

int main(){
    int cnt;
    char ch;
    while (ch = getchar() != EOF)
    {
        cnt++;
    }
    printf("the number of chars: %d\n",cnt);
    return 0;
}