#include<stdio.h>
void br(){
    printf("Brazil,Russia");
}
void ic(){
    printf("India,China");
}
void main(){
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
}