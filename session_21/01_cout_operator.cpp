#include<iostream>

class Date{
    private :
       int day,month,year;
    public :
       friend std::ostream &operator<<(std::ostream &os,const Date &date_obj);
       Date(int _day,int _month,int _year): day(_day),
                                           month(_month),
                                           year(_year){}
};

std :: ostream & operator<<(std :: ostream&os,const Date &date_obj){
    os << date_obj.day << '/' << date_obj.month << '/' << date_obj.year 
    << std::endl;

    return os;
}

int main(void){
    Date today(22,6,2022);
    std ::cout << today <<std :: endl ;
    return 0;
}