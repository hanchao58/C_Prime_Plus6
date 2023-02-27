#include<stdio.h>
#include<ctype.h>
/*输入字母，判断是否为字母且是否为字母*/
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
        printf("%c字符是字母,数值为%d\n",ch,inde(ch));
        }
        else{
             printf("%c字符不是字母\n",ch);
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