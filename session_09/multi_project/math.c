#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
} ;

extern struct Date myDate;

double angle = 3.1415;

double cpa_sin(double x){
    puts("in cpa  sin()") ;
    return 0;
}

double cpa_cos(double x){
    puts("cpa cos()");
    return 0;
}