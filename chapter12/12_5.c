#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

/*生成随机数排序*/
void sort(int arr[], int n);
void show_arr(const int arr[], int n);


int main(){
    int num_arr[MAX];
    int i;

    srand((unsigned int)time(0));
    for (i = 0; i < MAX; i++)
    {
        num_arr[i] = rand() % 10 + 1;
    }
    printf("Array:\n");
    show_arr(num_arr, MAX);
    sort(num_arr, MAX);
    printf("\n after sort:\n");
    show_arr(num_arr, MAX);
    return 0;
}

void sort(int arr[], int n){
    int temp;
    for (int top = 0; top < n - 1; top++)
    {
        for (int seek = top + 1; seek < n; seek++)
        {
            if(arr[top] < arr[seek])
            {
                temp = arr[top];
                arr[top] = arr[seek];
                arr[seek] = temp;
            }
        }
        
    }
    

}
void show_arr(const int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}