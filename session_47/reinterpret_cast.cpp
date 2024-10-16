#include<iostream>

#ifndef OFFSET_OF 
#define OFFSET_OF(type,mem) (reinterpret_cast<std :: size_t>(&(reinterpret_cast<type*>(0))->mem))
#endif

#ifndef CONTAINER_OF
#define CONTAINER_OF(addr,type,mem) (reinterpret_cast<type*>(reinterpret_cast<std :: size_t>(addr) - OFFSET_OF(type,mem)))
#endif

struct Date {
    int day;
    int month;
    int year;
};

class A {
    
    private:
      unsigned long long int x,y,z;
      double p,q;
    public :
        A() : x(0),y(0),z(0),p(0.0),q(0.0){

        }
        A(unsigned long long _x,double _y): x(_x),y(2*_x),z(3 * _x),
                      p(_y),q(2*_y)
                      {

                      }
    void show(){
        std :: cout <<"In A :: show() :"<< std ::endl;
        std :: cout <<"x : "<< x<<std::endl;
        std :: cout <<"y : "<< y<< std::endl;
        std :: cout <<"z : "<< z<< std::endl;
        std :: cout <<"p : "<< p<< std::endl;
        std :: cout <<"q : "<< q<< std ::endl; 
    }
};

class B{
    private :
       unsigned long long int arr[5];
    public :
       B(){
          for(std :: size_t i = 0 ;i != 5 ;++i)
              arr[i] = (i+ 1) * 11111;
       }
};

void use_case_1(void);
void use_case_2(void);
void use_case_3(void);
void print_date_instance(int *a);
void use_case_4(void);
void use_case_5(void);
void use_case_6(void);

void hex_dump(void *p,std::size_t,const char *msg);
int main(void){
    use_case_1();
    use_case_2();
    use_case_3();
    use_case_4();
    use_case_5();
    use_case_6();
    return 0;
}


void use_case_1(void){
    std:: cout <<"-----use case 1--------" << std :: endl;
    unsigned int num = 0x0a0b0c0d ;

    if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(&num) ) == 0xd)
       std :: cout << "target machine is little endian " << std :: endl;
    else if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char*>(&num))  == 0xa)
       std :: cout <<" target machine is big endian "<< std :: endl;
    else 
       std :: cout <<"out world"<< std :: endl;
}

void use_case_2(void){
    std :: cout <<"----------use case 2 -------"<< std :: endl;
    unsigned long long int N = 0;

    std :: cout << "N : " << std :: hex <<N<< std :: endl;
    *reinterpret_cast<unsigned char *>(&N) = 0xff;

    std :: cout <<"N : " << std :: hex << N<<std :: endl;
    *reinterpret_cast<unsigned short *>(reinterpret_cast<unsigned char *>(&N) + 1) = 0xffff;    
    std :: cout <<"N : "<< std :: hex << N<<std :: endl;

    *reinterpret_cast<unsigned int *>(reinterpret_cast<unsigned char *>(&N) + 3) = 0xffffffff;
    std :: cout <<"N : " << std :: hex<< N<<std ::endl;

    *reinterpret_cast<char *>(reinterpret_cast<unsigned char*>(&N)+7) = 0xff;

    std :: cout << "N : "<< std :: hex<< N<<std :: endl;
}

void use_case_3(void){

    std :: cout <<"---------use case 3 ---------"<< std :: endl;
    std :: cout << "offset of (struct date,day) :"<<OFFSET_OF(struct Date,day)<<std :: endl;
    std :: cout << "offset of (struct date, month) : "<< OFFSET_OF(struct Date,month)<< std :: endl;
    std :: cout <<"offset of(struct date,year) : "<< OFFSET_OF(struct Date,year)<< std::endl;

    struct Date mydate1 = {29,9,2024},mydate2 = {28,9,2024},mydate3= {30,9,2024};

    print_date_instance(&mydate1.year);
    print_date_instance(&mydate2.year);
    print_date_instance(&mydate3.year);

}

void print_date_instance(int * p_year){
    struct Date * pDate = CONTAINER_OF(p_year,struct Date,year);
    std :: cout  << "CONTAINER_OF Date Object:" << std :: dec
                 <<pDate->day<<"/" << pDate->month<<"/"<<pDate->year
                 <<std::endl;
}

void use_case_4(void){
    std :: cout <<"----------use case 4 --------"<< std :: endl;
    B objB;
    reinterpret_cast<A *>(&objB)->show();
}

void use_case_5(void){
    std :: cout <<"--- use case 5----"<< std :: endl;
    unsigned short  int s_num = 0xa0b0c;
    unsigned long long  int large_val = 0x1020304050607080;
    struct Date Mydate = {29,9,2024};

    hex_dump(reinterpret_cast<void *>(&s_num),sizeof(s_num),"hex_dump (s_num):");
    hex_dump(reinterpret_cast<void *>(&large_val), sizeof(large_val),"hex dump(large val):" );
    hex_dump(reinterpret_cast<void *>(&Mydate),sizeof(Mydate),"hex dimp mydate");
}

void hex_dump(void *p_mem_block, std :: size_t N, const char *msg){
       if(msg)
          std :: cout << msg<< std :: endl;
        for(std :: size_t i = 0;i != N;i++)
          std :: cout <<"BYTE ("<<i<<") :"<< std :: hex 
          << static_cast<int>(*reinterpret_cast<unsigned char *>(reinterpret_cast<unsigned char*>(p_mem_block)+i))
          <<std ::endl;
}

void use_case_6(){
    std :: cout <<"---- use case 6  ---"<< std ::endl;
    A objA(100,3.14);

    unsigned long long int local_x,local_y,local_z  ;
    double local_p,local_q ;

    local_x = *reinterpret_cast<unsigned long long int *>(reinterpret_cast<unsigned char *>(&objA) + 0);
    local_y = *reinterpret_cast<unsigned long long int *>(reinterpret_cast<unsigned char*>(&objA) + 8);
    local_z = *reinterpret_cast<unsigned long long int *> (reinterpret_cast<unsigned char*>(&objA) + 16);
    local_p = *reinterpret_cast<double *>(reinterpret_cast<unsigned char *>(&objA) + 24);
    local_q = *reinterpret_cast<double *>(reinterpret_cast<unsigned char *>(&objA)+32);

    std:: cout << "local_x : "<< std:: dec << local_x << std ::endl;
    std:: cout << "local_y : "<< std:: dec << local_y << std ::endl;
    std:: cout << "local_z : "<< std:: dec << local_z << std ::endl;
    std:: cout << "local_p : "<< std:: dec << local_p << std ::endl;
    std:: cout << "local_q : "<< std:: dec << local_q << std ::endl;
    
}