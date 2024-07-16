#include<iostream>
#include<typeinfo>

class cpaint{
    private: int n;
};

int main(void){
    cpaint x;
    int m = 100;

    std::cout << "sizeof(x) :" <<sizeof(x) << std::endl
              << "sizeof(x) : " << sizeof(x) << std::endl ;
    
    std::cout << "typeof(x) : " <<typeid(x).name()<<std::endl
              << "typeof(m) : "<<typeid(m).name()<<std::endl;
    
    int result = m + 5;

    //cpaint y = x + 4;
    
    return(0);
}