#include<stdio.h>

#define NUM 5
/*数组表示法*/
void copy_arr(double target[] ,const double sorce[],int num);
/*指针表示法*/
void copy_ptr(double *target2 ,const double *start ,int num);
/*sorce_end：指向数组最后一个元素的指针*/
void copy_ptrs(double target3[] ,const double sorce[],const double sorce_end[]);
void show_arr(const double target[],int num);
int main (){
    const double sorce[NUM] = {1.1,2.2,3.3,4.4,5.5};
    double target1[NUM],target2[NUM],target3[NUM];

    copy_arr(target1,sorce,NUM);
    copy_ptr(target2,sorce,NUM);
    copy_ptrs(target3,sorce,sorce + NUM);
    printf("target:");
    show_arr(target1,NUM);
    printf("target2:");
    show_arr(target2,NUM);
    printf("target3:");
    show_arr(target3,NUM);
    return 0;
}
void copy_arr(double target[] ,const double sorce[],int num){
    int i;
    for ( i = 0; i < num; i++)
    {
        target[i] = sorce[i];
    }
    
}
void copy_ptr(double *target2 ,const double *start ,int num){
    int i;
    for ( i = 0; i < num; i++)
    {
        *(target2+i) = *start;
        start++;
    }
}
void copy_ptrs(double target3[] ,const double sorce[],const double sorce_end[]){
    int i;
    for ( i = 0; i < (sorce_end - sorce); i++)
    {
       *(target3 + i) = *(sorce + i);
    }
    
}

void show_arr(const double target[],int num){
    int i;
    for ( i = 0; i < NUM; i++)
    {
        printf("%5g ",target[i]);  //doubel类型的输出
    }
    printf("\n");
}