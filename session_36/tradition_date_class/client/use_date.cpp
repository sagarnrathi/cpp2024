#include<iostream>
#include "date.hpp"

//#pragma comment(lib,"date.lib")

int main(void){
    Date mydate(11,8,24);
    mydate.show();

    int day = mydate.get_day();
    int month = mydate.get_month();
    int year = mydate.get_year();

    std :: cout <<"getter :" << day <<"/" << month << "/" << year << std ::endl;

    mydate.set_day(1);
    mydate.set_month(1);
    mydate.set_year(1970);

     day = mydate.get_day();
     month = mydate.get_month();
     year = mydate.get_year();

    std :: cout <<"getter :" << day <<"/" << month << "/" << year << std ::endl;
}