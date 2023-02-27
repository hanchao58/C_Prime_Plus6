#include<stdio.h>
void larger_of(double *x, double *y);
s
int main(){
    double x,y;
    if(scanf("%lf%lf",&x,&y) == 2){

        larger_of(&x,&y);        
        printf("x:%lf,y:%lf",x,y);
    } 
    return 0;
}
 void larger_of(double *x,double *y){
    *x = *y = (*x>*y ? *x: *y);
}