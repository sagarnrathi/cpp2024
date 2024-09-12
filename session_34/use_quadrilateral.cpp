#include<iostream>
#include "quadrilateral.hpp"

void test_quadrilateral(void);

int main(void){
    test_quadrilateral();
    return 0;
}

void test_quadrilateral(void){
    quadrilateral *pqd = new quadrilateral(3.3,4.1,2.2,4.3);
    double perimeter  = pqd->perimeter();
    std :: cout <<" perimeter is " << perimeter << std :: endl;

    double area = pqd -> area();
    std :: cout << " area is " << area << std :: endl;

    std :: cout << "pquad " << std :: endl <<*pqd;
    delete pqd;
    pqd =0;
}