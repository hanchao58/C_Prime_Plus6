#include<stdio.h>
#define ADD 15
#define TAXPER 0.15
void showsaraly(double base,double hours);
int showmenu();


int main(){
    int  choice,base,hours; 
    while((choice = showmenu())!= 5)
    {  
        printf("输入每周工作小时数:\n");
        scanf("%d",&hours);
        switch (choice)
        {
        case 1:
            showsaraly(8.77,hours);
            break;
        case 2:
            showsaraly(9.33,hours);
            break;
        case 3:
            showsaraly(10.00,hours);
            break;
        case 4:
            showsaraly(11.20,hours);
            break;
        }
        printf("choice:%d\n",choice);
        printf("\n");            
    }
    printf("Done\n");
}

void showsaraly(double base,double hours ){
    int money,tax;
    //printf("%f",base);
    if(hours<=40)
        money = hours*base;
    else
        money = 40*base + (hours-40)*base*1.5;
    if(money<=300)
        tax = money *TAXPER;
    else if(money>=300 && money<=450)
        tax = 45 + (money -300)*0.2;
    else
        tax = 75 + (money-450)*0.25;
    printf("money:%d,tax:%d,%d\n",money,tax,money-tax);

}
int showmenu(){
        int i,j,choice;

    for(i=0;i<70;i++)
        printf("*");

    printf("\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75               2)9.33\n");
    printf("3) $10.00               4)11.20\n");
    printf("5) quit\n");

    for(j=0;j<70;j++)
        printf("*");
    printf("\n输入基础工资选择:");
    while(scanf("%d",&choice) != 1 || choice < 1 || choice > 5)
        printf("again\n");
    while(getchar()!='\n')
        continue;
    return choice;
}