#include<iostream>

class Date{
    private :
       int day , month,year;
    public :
        friend std::ostream & operator<<(std :: ostream &os, const Date &date_object);
        friend std::istream &operator>>(std :: istream &os,  Date &date_object);
        Date () : day(1), month(1), year(1970){

        }
        Date(int _day, int _month,int _year) : day(_day),month(_month),year(_year){}

};

std :: ostream & operator <<(std :: ostream &os,const Date &date_obj){
    os << date_obj.day  << "/" << date_obj.month << "/" << date_obj.year << std::endl;
    return os;
}




std :: istream & operator >>(std :: istream &is, Date &date_obj){
    std::cout << "enter day";
    is >> date_obj.day ;
    std::cout << "enter month";
    is >> date_obj.month;
    std::cout << "enter year";
    is >> date_obj.year;
    return is ;
}

int main(void){
    Date today;
    std :: cin >> today;
    std :: cout << today << std::endl;

    return 0 ;
}
