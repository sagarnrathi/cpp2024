#include<iostream>

class Date {
    private :
        int day;
        int month;
        int year;
    public :
        friend std::ostream &operator <<(std::ostream &os, const Date &date_obj);
        Date(int _dd, int _mm,int _yy): day(_dd),month(_mm),year(_yy){}
};

std :: ostream &operator<<(std:: ostream &os,const Date &date_obj){
    os << date_obj.day << "/"
     << date_obj.month <<"/"
     << date_obj.year  << std::endl;
    return os;
}

int main(void){
    Date epochDate(1,1,1970);
    std::cout  <<"epoch date" << epochDate;
    return 0;
}