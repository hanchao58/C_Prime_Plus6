#include <stdio.h>
#include <ctype.h>
#define MAX 10
/*�õ��������������*/
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
    *str++ = c;        /*�ѵ�һ����������ֵ��strָ���ֵ���ٰ�ָ��ָ����һ����*/
    while (!isspace(c = getchar()) ||(i < n-1 ))
    {
        *str++ = c;         /*ֱ��������һ���ո�*/
        i++;
    }
    *str = '\0';
    while(getchar() != '\n')
        continue;
    return pt;

}