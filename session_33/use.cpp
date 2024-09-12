#include<iostream>
#include "quadrilateral.hpp"

void test_quad();
int main(void){
    test_quad();
    return 0;
}

void test_quad(void){
    Quadrilateral *pQuad = new Quadrilateral(10,20,20,30);
    
    double perimeter = pQuad->perimeter();
    std :: cout << "perimater : " << perimeter << std :: endl;
    double area = pQuad->area();
    std :: cout << "area : " << area<< std::endl;

    std :: cout << "pQaud : " << std :: endl << *pQuad;
    delete pQuad;
    pQuad = 0;
}