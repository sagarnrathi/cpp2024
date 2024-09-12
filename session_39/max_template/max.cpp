#include<iostream>
#include "max.hpp"

int main(void){
    int a  = 300;
    int m1 = max<int > (1,400);
    std :: cout << "max in " << a << " and 400 is : " << m1<< std::endl;

    float f1 = 3.2;
    float f2 = 5.3;
    float f_max = max<float>(f1,f2);
    std :: cout << "max in " << f1 << " and " << f2 << " is : " <<f_max << std::endl;
    return 0;

}