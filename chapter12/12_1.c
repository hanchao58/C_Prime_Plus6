#include<stdio.h>
/*用指针代替全局变量*/
void critic(int *units);

int main(){
    int *pr;
    int units;
    printf("How many pounds to a firkin or butter?\n");
    scanf("%d",&units); 
    pr = &units;
    while (*pr != 50)
        critic(pr);
    printf("You must have looked it up!\n");

    return 0;
}
void critic(int *units){
    printf("Try again\n");
    scanf("%d",units);
}