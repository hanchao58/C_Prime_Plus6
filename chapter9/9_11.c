#include<stdio.h>
/*ì³²¨ÄÇÆõÊýÁÐ*/
int Fibonacci(int n);

int main (){
    int n;
    scanf("%d",&n);
    Fibonacci(n);
    return 0;
}

int Fibonacci(int n){
    int f1,f2,tmp;
    int i;
    f1=f2=1;
    for(i=0;i<=n;i++){
        printf("%d\n",f2);
        tmp = f1 + f2;
        f2 = f1;
        f1 = tmp;
    }
}