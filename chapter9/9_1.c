#include<stdio.h>

double min(double x,double y);


int main(){
    double x,y,MIN;
    printf("INPUT:");
    if(scanf("%lf%lf",&x,&y) == 2){         /*%lf¶ÔÓ¦double*/
        printf("x:%f,y= %f",x,y);
        MIN = min(x,y);
        printf("MIN:%f",MIN);
    }
    return 0;
}

double min(double x, double y){
    double Min;
    if(x>y)
        Min = y;
    else
        Min = x;

    return Min;
}