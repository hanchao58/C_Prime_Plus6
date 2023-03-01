#include<stdio.h>

#define NUM 5
/*二维数组替换*/
void copy_arr(double target[] ,const double sorce[],int num);
void show_arr(const double target[],int num);
int main (){
    const double source[2][NUM] = 
                            {{1.1,2.2,3.3,4.4,5.5},
                             {1.2,2.3,3.4,4.5,5.6}};
    double target1[2][NUM];
    int i;
    printf("source:");
    for(i=0;i<2;i++){
        show_arr(source[i],NUM);
        copy_arr(target1[i],source[i],NUM);
    }
    printf("target1:");
    for(i=0;i<2;i++){
        show_arr(target1[i],NUM);
    }
    
    return 0;
}

void copy_arr(double target[] ,const double sorce[],int num){
    int i;
    for ( i = 0; i < num; i++)
    {
        target[i] = sorce[i];
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