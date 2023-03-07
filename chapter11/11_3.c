#include <stdio.h>
#include <ctype.h>
#define MAX 10
/*得到单词数组的输入*/
char *get_arr(char *str,int n);

int main(){
    char arr[MAX];
    get_arr(arr,MAX);
    puts(arr);
    return 0;
}
char *get_arr(char *str,int n){
    int i = 0;
    char c;
    char *pt = str;
    while (isspace(c = getchar()))
    {
        continue;
    }
    i++;
    *str++ = c;        /*把第一个非零数赋值给str指向的值，再把指针指向下一个数*/
    while (!isspace(c = getchar()) ||(i < n-1 ))
    {
        *str++ = c;         /*直到遇到第一个空格*/
        i++;
    }
    *str = '\0';
    while(getchar() != '\n')
        continue;
    return pt;

}