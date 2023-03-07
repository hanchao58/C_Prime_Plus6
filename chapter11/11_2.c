#include <stdio.h>
#include <ctype.h>
#define MAX 10

int get_arr(char str[],int n);

int main(){
    char arr[MAX];
    get_arr(arr,MAX);
    puts(arr);
    return 0;
}
int get_arr(char str[],int n){
    int i;
    for(i = 0; i < n-1;i++){
        str[i] = getchar();
        if(isspace(str[i]) || str[i]== '\n' || str[i]== '\t')
            return 0;
    }

    str[n] = '\0';
}