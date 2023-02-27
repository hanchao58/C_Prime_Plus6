#include<stdio.h>
void larger_of(double *x, double *y,double *z);

int main(){
    double x,y,z;
    if(scanf("%lf%lf%lf",&x,&y,&z) == 3){

        larger_of(&x,&y,&z);        
        printf("x:%lf,y:%lf,z:%lf",x,y,z);
    } 
    return 0;
}
void larger_of(double *x, double *y,double *z){
    double tem; 

    if(*x>*y){
        tem = *x;
        *x = *y;
        *y = tem;
    }
    if(*x > *z){
        tem = *x;
        *x = *z;
        *z = tem;
    }  
    if(*y > *z){
        tem = *y;
        *y = *z;
        *z = tem;
    } 
}