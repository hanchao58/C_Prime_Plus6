#include<stdio.h>

#define NUM 11

//void write(int arr[],int index);
/*ÕÒ×î´óÖµ£¨int£©*/
int Max_out(int arr[],int index);

int main(){
    int arr[NUM] = {1,3,4,56,4,34,5,768,3212,34,445};
    //write(arr,NUM);
    printf("MAX:%d",Max_out(arr,NUM));
    return 0;
}
// void write(int arr[],int index){
    
// }
int Max_out(int arr[],int index){
    int i;
    int MAX = arr[0];
    for ( i = 0; i < index; i++)
    {
        if(MAX < arr[i])
            MAX = arr[i];
    }
    return MAX;
    
}