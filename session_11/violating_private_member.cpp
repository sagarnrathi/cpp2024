#include<cstdio>

class Date{
    private :
        int day ;
        int month;
        int year;
    
    public :
        Date(int _day,int _month,int _year) :day(_day),month(_month),year(_year){

        }

        void show(){
            printf("%d/%d/%d \n",day,month,year);
        }

};

int main(void){
    Date myDate(18,3,20210);
    myDate.show();

    *reinterpret_cast<int*>(reinterpret_cast<char*>(&myDate)+0) = 26;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(&myDate)+4) = 9;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(&myDate)+8) = 2024;

    myDate.show();
    return(0);
}