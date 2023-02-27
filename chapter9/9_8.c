#include<stdio.h>
#include<ctype.h>

/*输出数的整数幂*/
double power(double n,int p);

int main(){
    double n,pow;
    int p;
    printf("input:\n");
    scanf("%lf %d",&n,&p);
    pow = power(n,p);
    if(n && p)
        printf("power:%lf\n",pow);
    
    return 0;
}
double power(double n,int p){
    int i;
    double pow = 1;
    if(p == 0){
        if(n == 0)
            printf("undefine");
        else 
            return 1; 
    }
    else if(p > 0){
        for ( i = 1; i <= p; i++)
            pow*=n;
        return pow;    
    }
    else {
        for ( i = 1; i <= -p; i++)
            pow*=n;
        return 1/pow;    
    }

}