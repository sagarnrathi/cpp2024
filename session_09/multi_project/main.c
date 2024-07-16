#include<stdio.h>

struct Date {
    int Day ;
    int Month ;
    int year;
};

struct Date MyDate ;

extern double cpa_sin(double);
extern double cpa_cos(double);

extern double angle;

int main(void){
    cpa_sin(angle);
    cpa_cos(angle);

    return(0);
}