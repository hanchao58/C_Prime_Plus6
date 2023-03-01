#include<stdio.h>
#define NUM 7

void show_arr(const double arr[],int num);
/*翻转数组*/
void reverse(double arr[],int num);

int main(){
    double arr[NUM] = {1.4,2.5,3.6,4.9,5.2,9.3,40.2};
    show_arr(arr,NUM);
    reverse(arr,NUM);
    show_arr(arr,NUM);
    return 0;
}
void show_arr(const double arr[],int num){
    int i;
    for ( i = 0; i < NUM; i++)
    {
        printf("%5g ",arr[i]);  //doubel类型的输出
    }
    printf("\n");
}
void reverse(double arr[],int num){
    int i;
    double tmp;
    for (i = 0; i < num; i++,num--)
    {
        tmp = arr[i];
        arr[i] = arr[num - 1];
        arr[num -1] = tmp;

    }
    

}