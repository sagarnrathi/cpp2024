#include<cstdio>

class  Date{
    private :
        int day;
        int month;
        int year;
    public:
       Date(int _day,int _month,int _year):
       day(_day),
       month(_month),
       year(_year){

       }

       int get_day() const{
        return this ->day;
       }

       int get_month() const{
        return this -> month;
       }

       int get_year()const{
        return this -> year ;
       }

       void set_day(int new_day){
        this ->day =  new_day ;
       }

       void set_month(int new_month){
        this ->month = new_month;
       }

       void set_year(int new_year){
        this -> year = new_year ;
       }

       
};