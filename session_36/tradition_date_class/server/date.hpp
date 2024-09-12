#ifndef _DATE_HPP
#define _DATE_HPP

class Date {

    private :
        int day,month,year;

    public :
        Date(int init_day,int init_month,int init_year);
        int get_day();
        int get_month();
        int get_year();
        
        void set_day(int new_day);
        void set_month(int new_month);
        void set_year(int new_year);
        void show();

};

#endif