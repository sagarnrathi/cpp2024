#include<iostream>

class Date{
    private :
       int day,month,year;
    public :
       Date(int _d,int _m,int _y): day(_d),month(_m),year(_y){

       }
       void show() const{
            std :: cout <<"Date ::show() :" << day<<"/"<< month << "/" << year << std ::endl;
       }
};

int main(void){
    Date myDate(1,1,1970);
    myDate.show();
    
    int local_day = *(int *) ((char *)&myDate + 0);
    
    int local_month = *(int *)((char *)&myDate + 4);

    int local_year =  * (int *)((char *)&myDate + 8);

    std :: cout << local_day << "/" << local_month << "/" << local_year<< std::endl;

    return 0;
}