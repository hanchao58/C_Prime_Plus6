#include <stdio.h>
#define ROWS 3
#define CLOS 5
/*键盘输入多维数组*/
void arr_input(double arr[][CLOS] , int NUM);
/*计算每一行的平均值*/
double arr_mean_5(double arr[] , int NUM);
/*计算总的平均值*/
double arr_mean(double arr[][CLOS] , int NUM);
/*寻找最大值*/
double find_max(double arr[][CLOS],int NUM);
/*打印数组*/
void show_arr(double arr[][CLOS],int NUM);


int main(){
    double arr[ROWS][CLOS];
    arr_input(arr, ROWS);
    show_arr(arr, ROWS);
    for(int i = 0 ; i < ROWS; i++)
    {   printf("\nROWS%d:",i+1);
        printf("%5g",arr_mean_5(arr[i],CLOS));}
    printf("\nmean:%5g",arr_mean(arr,ROWS));
    printf("\nmax:%5g",find_max(arr,ROWS));    
    return 0;
}


void arr_input(double arr[][CLOS] , int NUM){
    int i ,j;
    for(i = 0; i < NUM; i++){
        printf("ROWS%d:\n",i + 1);
        for (j = 0; j < CLOS; j++)
        {
            scanf("%lf",*(arr + i) +j);
        }
        
    }
}


double arr_mean_5(double arr[] , int NUM){
    int i;
    double sum;
    for(i = 0;i < NUM; i++){
        sum += *(arr + i);
    }
    return sum/NUM;
}


double arr_mean(double arr[][CLOS] , int NUM){
    int i,j;
    double sum;
    for(j = 0; j < NUM; j++){
        for ( i = 0; i < CLOS; i++)
        {
            sum +=arr[j][i];
        }
    }
    return sum/(CLOS*NUM);
}


double find_max(double arr[][CLOS],int NUM){
    int i,j;
    double max = **arr;
    for(j = 0; j < NUM; j++){
        for ( i = 0; i < CLOS; i++)
        {
            if(max < arr[j][i])
                max=arr[j][i];
        }
    }
    return max;

}


void show_arr(double arr[][CLOS],int NUM){
    int i;
    int j;
    for(j = 0; j < NUM; j++){
        for ( i = 0; i < CLOS; i++)
        {
            printf("%5g ",arr[j][i]);  //doubel类型的输出
        }
        printf("\n");
    }
    printf("\n");
}