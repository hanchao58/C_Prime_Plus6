#include <stdio.h>
#include "pe12-2a.h"
static int in_mode = 1;
static int distance;
static double fuel_consumed;

void set_mode(int mode){
    if(mode > 1)
        printf("Invalid mode,Mode %d used",in_mode);
    else 
        in_mode = mode;
}

void get_info(){
    if(in_mode)
    {
        printf("Enter distance in miles:");
        scanf("%d",&distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf",&fuel_consumed);
    }
    else
    {
        printf("Enter distance in kilometers:");
        scanf("%d",&distance);
        printf("Enter fuel consumed in liters:");
        scanf("%lf",&fuel_consumed);        
    }

}

void show_info(){
    if(!in_mode)
        printf("fuel consumed is distence %.1lf liters per 100km\n",fuel_consumed/(distance/100));
    else
        printf("fuel consumed is distence %.1lf miles per gallons\n",distance/fuel_consumed);
    printf("fuel:%lf,distance:%d",fuel_consumed,distance);
}