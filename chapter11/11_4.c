#include <stdio.h>
#include <ctype.h>
#define MAX 10
/*�õ��������������*/
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
    i++;        /*�ѵ�һ����������ֵ��strָ���ֵ���ٰ�ָ��ָ����һ����*/
    while (!isspace(c = getchar()) ||(i < n-1 ))
    {
        str[i] = c;         /*ֱ��������һ���ո�*/
        i++;
    }
    str[n] = '\0';
    // while(getchar() != '\n')
    //     continue;
    return 0;
}