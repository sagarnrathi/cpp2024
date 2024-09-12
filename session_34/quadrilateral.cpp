#include "quadrilateral.hpp"
#include <cstdlib>
#include<cmath>

quadrilateral :: quadrilateral(double _s1, double _s2,double _s3,double _s4){
    if(_s1 <=0 || _s2 <=0  || _s3 <= 0 || _s4 <= 0){
        std :: cerr << "side of quadrilaterla can not be -ve . exiting" << std :: endl;
    exit(EXIT_FAILURE);
    }

    if(
        _s1 + _s2 + _s3 <= _s4  ||
        _s4 + _s2 + _s3 <= _s1  ||
        _s1 + _s4 + _s3 <= _s2  ||
        _s1 + _s4 + _s3 <= _s3 
    ){
        std :: cerr << "input do no form valid quadrilateral .exiting" << std :: endl;
        exit(EXIT_FAILURE);
    }

    s1 = _s1;
    s2 = _s2;
    s3 = _s3;
    s4 = _s4;
}

double quadrilateral ::perimeter() const{
    return (s1 + s2 + s3 + s4);
}

double quadrilateral :: area() const {
    double s  = perimeter()/2 ;
    return sqrt((s-s1) * (s-s2) *(s-s3)*(s-s4));
}

std :: ostream & operator<<(std :: ostream &os, const quadrilateral &quad){
     os << "sides of quadrilateral : " << std :: endl
     << "length of side 1 == "<< quad.s1 << std :: endl
     <<"lentth of size 2  == " << quad.s2 << std :: endl
     <<"length of side 3  == "  << quad.s3 << std ::endl
     <<"length of side 4  == " << quad.s4 << std ::endl;
     return os;
}