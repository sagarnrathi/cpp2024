#include<iostream>

class Date{
    private :
        int day,month, year;
    public :
        Date(int _d,int _m,int _y) : day(_d),month(_m),year(_y){

        }

        int get_day() const { return day;}
        int get_month() const {return month;}
        int get_year() const {return year ;}

        void set_day(int new_day){ day = new_day;}
        void set_month(int new_month){month = new_month;}
        void set_year(int new_year){ year = new_year;}
};

void use_case_1(void);
void use_case_2(void);
void access_date(Date *pdate);

int main(void){
    use_case_1();
    use_case_2();
    return 0;
}

void use_case_1(void){
    std :: cout <<"-----use case 1------"<< std ::endl;
    const int num = 100;
    int *p_num;
    p_num = const_cast<int *>(&num) ;
    std:: cout << "Before : "<< *p_num<< std ::endl;
    *p_num = 500;
    std :: cout <<"after : "<< *p_num << std ::endl;
}

void use_case_2(){
    Date today(01,10,2024);
    access_date(&today);
}

void access_date(Date *pdate){
    std :: cout <<"use case 2 " << std::endl;
    int dd,mm,yy;
    dd = const_cast<const Date*>(pdate)-> get_day();
    mm = const_cast<const Date *>(pdate) -> get_month();
    yy = const_cast<const Date *>(pdate) -> get_year();

    std :: cout << "access date : "<<dd<<"/"<<mm<<"/"<<yy<< std::endl;

    pdate->set_day(30);
    dd = const_cast<const Date*>(pdate)-> get_day();
    mm = const_cast<const Date *>(pdate) -> get_month();
    yy = const_cast<const Date *>(pdate) -> get_year();

    std :: cout << "access date : "<<dd<<"/"<<mm<<"/"<<yy<< std::endl;
}