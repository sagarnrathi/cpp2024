#include<cstdio>

class Date{
    private :
        int Day ;
        int Month;
        int year;
   
    public :
        Date(int _Day,int _Month,int _Year) :  Day(_Day),
                                              Month(_Month),
                                              year(_Year)
                                              {

                                              }
                                              
    int get_day() const{
        return  this -> Day ;
    }      

    int get_month() const {
        return this -> Month;
    }

    int get_year() const{
        return this -> year;
    }

    void set_day(int new_day){
        this -> Day = new_day ; 
    }

    void set_month(int new_month){
        this ->Month = new_month  ;
    }

    void set_year(int new_year){
        this -> year = new_year ;
    }
    
};