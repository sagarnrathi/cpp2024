#include "complex.hpp"
int main(void){
    Complex c1(1.1,2.2);
    Complex c2(3.3,4.4);

    Complex sum = c1 + c2 ;
    Complex min = c1 - c2;

    c1.show("c1:");
    c2.show("c2 :");
    sum.show("sum:");
    min.show("minus :");
}