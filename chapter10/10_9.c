#include<stdio.h>

void copy_arr(int rows,int cols,double target[rows][cols],const double sorce[rows][cols]);
void show_arr(int rows,int cols,const double target[rows][cols]);
int main(){
    int rows = 3;
    int cols = 5;
    double arr[3][5] = {
                        {1,2,3,4,5},
                        {1.1,2.2,3.3,4.4,5.5},
                        {6,7,8,9,10}};
    double target[rows][cols];
    show_arr(rows,cols,arr);
    copy_arr(rows,cols,target,arr);
    show_arr(rows,cols,target);
    return 0;
}

void show_arr(int rows,int cols,const double target[rows][cols]){
    int i;
    int j;
    for(j = 0; j < rows; j++){
        for ( i = 0; i < cols; i++)
        {
            printf("%5g ",target[j][i]);  //doubel类型的输出
        }
        printf("\n");
    }
    printf("\n");
}
void copy_arr(int rows,int cols,double target[rows][cols],const double sorce[rows][cols]){
    int i;
    int j;
    for(j = 0; j < rows; j++){
        for ( i = 0; i < cols; i++)
        {
            target[j][i] = sorce[j][i];
        }
    }
    
}