#include<iostream>

class Date{
     
     private :
          int day,month,year;
    public :
       Date():day(1),month(1),year(1970){

       }

       Date(int _day,int _month,int _year) : day(_day),month(_month),year(_year){
       }

       int get_day() const { return day ;}
       int get_month() const {return month ;}
       int get_year() const {return year;}

       void set_day(int new_day) { day = new_day;}
       void set_month(int new_month){month = new_month;}
       void set_year(int new_year){year = new_year;}

       void show(const char *msg) const{
          if(msg)
              std :: cout << msg << std:: endl ;
          std :: cout << day << "/"<<month <<"/" << year << std::endl;
       }
};

void test_1(void);

int main(void){
     test_1();
     return 0;
}

void test_1(void){
     Date mydate1;
     mydate1.show("this is date 1  :");
     Date mydate2(23,6,2024);
     mydate2.show("this is date2 : ");
     Date mydate3(mydate1);
     mydate3.show("showing mydate 3 :");

     mydate3 = mydate2;
     mydate3.show("this is equlat to 2");
}