#include "square.hpp"
#include<typeinfo>

void test_square(void);
void test_virtual(void);

int main(void){
    test_square();
    test_virtual();
    return EXIT_SUCCESS;
}

void test_square(void){
    Square *psqr = new Square(10);
    double P = psqr -> perimeter();
    double A = psqr -> area();
    double D = psqr -> diagonal();
}

void test_virtual(void){

    Square s(10);

    Qadrilateral *pquad = &s;
    Square *psqr = 0;

    pquad = &s;
    double p = pquad -> perimeter();
    double a = pquad ->area();
    double b = pquad -> Qadrilateral :: area();

    std::cout << "typeid(*pquad).name() -> " << typeid(*pquad).name() << std::endl; 

}