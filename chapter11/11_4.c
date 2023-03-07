#include <stdio.h>
#include <ctype.h>
#define MAX 10
/*得到单词数组的输入*/
int  get_arr(char str[],int n);

int main(){
    char arr[MAX];
    get_arr(arr,MAX);
    puts(arr);
    return 0;
}
int get_arr(char str[],int n){
    int i = 0;
    char c;
    while (isspace(c = getchar()))
    {
        continue;
    }
    str[i] = c;
    i++;        /*把第一个非零数赋值给str指向的值，再把指针指向下一个数*/
    while (!isspace(c = getchar()) ||(i < n-1 ))
    {
        str[i] = c;         /*直到遇到第一个空格*/
        i++;
    }
    str[n] = '\0';
    // while(getchar() != '\n')
    //     continue;
    return 0;
}