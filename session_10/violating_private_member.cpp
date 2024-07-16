#include<cstdio>

class Date{
    private :
         int Day;
         int Month;
         int year;
    public :
        Date(int _day,int _month,int _year):Day(_day),
                                            Month(_month),
                                            year(_year){

                                            }
        void show(){
            printf("%d/%d/%d \n",Day,Month,year);
        }
};

int main(void){
    Date myDate(18,5,2023);
    myDate.show();
    *reinterpret_cast<int*>(reinterpret_cast<char *>(&myDate) + 0) = 20;
    *reinterpret_cast<int*>(reinterpret_cast<char *> (&myDate) + 4) = 34;
    *reinterpret_cast<int*>(reinterpret_cast<char *>(&myDate) + 8) = 2026;

    myDate.show();

    return(0);
}