#include<stdio.h>
#include<ctype.h>
/*������ĸ���ж��Ƿ�Ϊ��ĸ���Ƿ�Ϊ��ĸ*/
void read();
int inde(int ch);

int main(){
    read();
    return 0;
}

void read(){
    int ch;
    while((ch = getchar())!= EOF){
        if(isalpha(ch)){
        printf("%c�ַ�����ĸ,��ֵΪ%d\n",ch,inde(ch));
        }
        else{
             printf("%c�ַ�������ĸ\n",ch);
        }
        while(getchar()!='\n')
            continue;
    }
}
int inde(int ch){
    if(islower(ch)){
        return ch - 96;
    }
    else if(isupper(ch)){
        return ch - 64;
    }
    else
        return -1;
}