#include <stdio.h>
#include <stdlib.h>
#define N 10
#define MAX 1000

int main(){
    int i, temp;
    int arr[N+1]={0};
    unsigned int seed;

    for (seed = 0; seed < N; seed++)
    {
        srand(seed);
        for ( i = 0; i < N + 1; i++)
        {
            arr[i] = 0;
        }        
        for ( i = 0; i < MAX; i++)
        {
            temp = rand() % 10 + 1;
            arr[temp]++;
        }
        for ( i = 0; i < N + 1; i++)
        {
            printf("%d apperars %d times\n",i, arr[i]);
        }
        
    }
    return 0;
}