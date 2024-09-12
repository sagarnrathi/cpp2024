#include<iostream>
#include "Quadrilateral.hpp"

void test_quadrilateral();

int main(void){
    test_quadrilateral();
    return 0;
}

void test_quadrilateral(){

    Qadrilateral *pquad = new Qadrilateral(3,4,3,5);

    double perimeter = pquad -> perimeter();
    std :: cout <<" Perimeter : " << perimeter << std::endl;

    double area = pquad -> area();
    std :: cout <<" Area : " << area << std :: endl;

    std :: cout << "pQuad :" << std::endl <<*pquad;

    delete pquad;
    pquad = 0;

}