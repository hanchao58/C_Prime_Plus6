#include <stdio.h>
#define MAX 10

void get_arr(char str[],int n);

int main(){
    char arr[MAX];
    get_arr(arr,MAX);
    puts(arr);
    return 0;
}
void get_arr(char str[],int n){
    int i;
    for(i = 0; i < n-1;i++){
        str[i] = getchar();
    }
    str[n] = '\0';
}