#include<stdio.h>
/*��ӡ�ַ�i��j��*/
void chline(char ch,int i,int j);


int main(){
    char ch ;
    int i,j;
    scanf("%c%d%d",&ch,&i,&j);
    chline (ch,i,j);
    return 0;
}
void chline(char ch,int i,int j){
    int x,y;
    printf("%d��%d��:\n");
    for(x=0;x<i;x++){
        for(y=0;y<j;y++){
                printf("%c",ch);
            }
        printf("\n");
    }
}