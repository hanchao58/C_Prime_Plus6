#include<stdio.h>

#define NUM 11
/*找最大值下标（double）*/
int Max_find(double arr[],int index);

int main(){
    double  arr[NUM] = {1.1,3.3,4.4,56.45,4.43,34.6,5.7,768.9,3212.10,34.29,445.3};
    printf("MAX_index:%d",Max_find(arr,NUM));
    return 0;
}
int Max_find(double arr[],int index){
    int i,MAX_index;
    double MAX = arr[0];
    for ( i = 0; i < index; i++)
    {
        if(MAX < arr[i])
        {
            MAX = arr[i];
            MAX_index = i;
        }
    }
    return MAX_index;
}