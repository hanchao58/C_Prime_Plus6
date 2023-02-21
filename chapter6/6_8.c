#include<stdio.h>
#include<stdlib.h>
/*输出两浮点数只差除以两数乘积*/
int main(){
    float a,b;
    printf("Please input two float(a b):\n"); 
    while(scanf("%f %f",&a,&b) == 2)//scanf返回值：输入数据类型与定义匹配，返回匹配成功个数。
    {
        printf("%f",(a-b)/(a*b));
    }
    return 0;
}