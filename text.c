#include <stdio.h>

int main()
{
    int GPI05_DR = 8;
    GPI05_DR &= ~(0x01<<3);
    printf("0x%x\n",(0x01<<3));
    printf("0x%x\n",~(0x01<<3));
    printf("0x%x\n",GPI05_DR);
    return -1;
}