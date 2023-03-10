#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256

int main(void)
{
    char **pt;
    int i, n, length;
    static char temp[MAX];

    printf("How many words do you wish to enter? ");
    scanf("%d", &n);
    if((pt = (char **)malloc(n * sizeof(char *)) )!= NULL)  /*����ָ������ĳ���*/
    {
        printf("Ender %d word :\n",n);
        for ( i = 0; i < n; i++)
        {
            scanf("%s", temp);      /*�ո�*/
            length = strlen(temp) + 1;
            pt[i] = (char *)malloc(length * sizeof(char)); /*����ָ������ָ�������ĳ���*/
        
        if(pt[i] != NULL)
            strcpy(pt[i], temp);
        }
        printf("Here are your words:\n");
        for (i = 0; i < n; i++)
        {
            puts(pt[i]);
            free(pt[i]);
            pt[i] = NULL;       /*�����ָ��ָ��NULL���ֹ�ڴ�����*/
        }
        free(pt);
        pt = NULL;
    }
}