#include<stdio.h>
#define BASE 10
#define ADD 15
#define TAXPER 0.15

int main(){
    int money,tax,hours;
    printf("输入每周工作小时数");
    scanf("%d",&hours);
    if(hours<=40)
        money = hours*BASE;
    else
        money = 40*base + (hours-40)*ADD;
    if(money<=300)
        tax = money *TAXPER;
    else if(money>=300 && money<=450)
        tax = 45 + (money -300)*0.2;
    else
        tax = 75 + (money-450)*0.25;
    printf("money:%d,tax:%d,%d",money,tax,money-tax);
}