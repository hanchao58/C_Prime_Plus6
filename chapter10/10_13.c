#include <stdio.h>
#define ROWS 3
#define CLOS 5
/*���������ά����*/
void arr_input(double arr[][CLOS] , int NUM);
/*����ÿһ�е�ƽ��ֵ*/
double arr_mean_5(double arr[] , int NUM);
/*�����ܵ�ƽ��ֵ*/
double arr_mean(double arr[][CLOS] , int NUM);
/*Ѱ�����ֵ*/
double find_max(double arr[][CLOS],int NUM);
/*��ӡ����*/
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
            printf("%5g ",arr[j][i]);  //doubel���͵����
        }
        printf("\n");
    }
    printf("\n");
}