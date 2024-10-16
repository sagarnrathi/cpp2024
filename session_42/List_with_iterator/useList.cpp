#include "list.hpp"

class Date{
    private :
       int day , month,year;
    public :
       Date(int _day,int _month, int _year) : day(_day),
                                              month(_month),
                                              year(_year){

                                              }
        Date() : day(1),month(1),year(1970){

        }
        bool operator==(const Date & other){
            return day == other.day && month == other.month && year == other.year ;
        }

        friend std :: ostream & operator<<(std :: ostream &os, const Date & date_object);
};

std :: ostream & operator <<(std ::ostream &os, const Date &Date_obj){
    os << Date_obj.day <<"/"<< Date_obj.month<<"/"<< Date_obj.year;
    return os;
}
int main(void){
    list<int> intList; 
    
    intList.insert_end(10); 
    intList.insert_end(20); 
    intList.insert_end(30); 
       std::cout << "intList using iterator" << std::endl; 
    for(
        list<int>::iterator iter = intList.begin(); 
        iter != intList.end(); 
        ++iter 
    )
      std::cout << "*iter=" << *iter << std::endl; 
      std :: cout <<"end";
}