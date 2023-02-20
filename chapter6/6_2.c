#include <stdio.h>
#include<string.h>
/*
 $
 $$
 $$$
 $$$$
 $$$$$
*/
int main(){
    int x,y;
    for(x=0;x<6;x++)
    {
        for(y=0;y<x;y++)
            printf("$");
        printf("\n");
    }
    //FEDCBA();
    //PQRSTU();
    pyramid();
   return 0;     
}
/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
void FEDCBA(){
    int x,y;
    for(x=0;x<7;x++)
    {
        for(y=0;y<x;y++)
            printf("%c",'F'-y);
        printf("\n");
    }
        
}
/*
A
BC
DFE
GHIJ
KLMNO
PQRSTU
*/
void PQRSTU(){
    int x,y;
    char index= 'A';
    for(x=0;x<7;x++)
    {
        for(y=0;y<x;y++,index++)
            printf("%c",index);
        printf("\n");
    }
        
}
/*
ÊäÈëE,µÃµ½£º
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
void pyramid(){
    int space,forword,reverse,x,y,z;
    char  index,max;
    scanf("%c",&index);
    max = index -'A'+1;
    for(x=0;x<max+1;x++)
    {
        for(space =0;space<max-x;space ++)
            printf(" ");
        for(y=0;y<x;y++)
            printf("%c",'A'+y);
        for(z=64+x;z>'A';z--)
            printf("%c",z-1);
        printf("\n");
    }
        
}