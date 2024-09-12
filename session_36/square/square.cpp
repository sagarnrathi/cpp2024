#include <cmath>
#include "square.hpp"

Square :: Square(double _s) : Qadrilateral(_s,_s,_s,_s),s(_s){

}

double Square :: area() const {
    std :: cout << "In Square :: areea()" << std :: endl;
    return s * s;
}

double Square :: diagonal() const{
    return sqrt(2) *s;
}