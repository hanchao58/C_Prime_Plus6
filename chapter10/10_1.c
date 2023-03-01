#include<stdio.h>
#define MONTHS 12
#define YEARS  5

int main(){
    const float rain[YEARS][MONTHS] = 
    {
        {4.4,4.5,4.6,3.0,2.0,1.2,0.7,0.2,0.5,2.9,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.6,2.4,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.7,2.4,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.8,2.4,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.9,2.4,3.5,6.6},
    };
    int year,month;
    float subtot, total;
    for(year= 0; year < YEARS;year++){
        for(month = 0,subtot = 0; month <MONTHS; month ++){
            subtot += *(*(rain + year) + month);
        }
        printf("%5d %15.1f\n",2021+year,subtot);
        total += subtot;
    }
    printf("average:%.1f\n",total/YEARS);
    for(month = 0; month <MONTHS; month ++){
        for (year= 0,subtot = 0; year < YEARS;year++)
        {
            subtot += *(*(rain + year) + month);
        }
        printf("%4.1f",subtot/YEARS);
        
    }
    return 0;
}