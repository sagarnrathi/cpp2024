#include "square.hpp"

void test_square();

int main(void){
    test_square();
    return EXIT_SUCCESS;
}

void test_square(){
    square *psq = new square(10);
    double p = psq->perimeter();
    double a = psq ->area();
    double d = psq ->diagonal();

    std :: cout << "perimeter : " << p << " aread : " << a << " diagonal " << d << std :: endl;
}