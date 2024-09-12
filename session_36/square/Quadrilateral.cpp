#include "Quadrilateral.hpp"
#include<cstdio>
#include<cmath>

Qadrilateral :: Qadrilateral(double _s1,double _s2,double _s3,double _s4){
       
     if(_s1 <= 0.0 || _s2 <= 0.0 || _s3 <= 0.0 || _s4 <= 0.0){
        std ::cerr <<" side of quadrilateral can not be negative . exiting" << std :: endl;
        exit(EXIT_FAILURE);
     }

     if(
        _s1 + _s2 + _s3 <= _s4 ||
        _s4 + _s2 + _s3 <= _s1 ||
        _s1 + _s4 + _s3 <= _s2 ||
        _s1 + _s2 + _s4 <= _s3 
     )
     {
        std :: cerr << "sum of three side can not be less than fourth. exiting " << std :: endl;
        exit(EXIT_FAILURE);

     }
     
     s1 = _s1;
     s2 = _s2;
     s3 = _s3;
     s4 = _s4;

}


double Qadrilateral ::perimeter() const {
    return s1 + s2 + s3 + s4;
} 

double Qadrilateral :: area() const {
    std :: cout << "In qadrilateral :: area()" << std :: endl;
    double s = perimeter() /2 ;
    return sqrt((s -s1) *(s - s2) *(s-s3)*(s-s4));
}

std :: ostream &operator<<(std:: ostream &os,const Qadrilateral &quad_obj){

    os << "side of quadrilateral : "<< std :: endl
    << "lemgth of size 1 == " << quad_obj.s1 << std:: endl
    << "length of side 2 == " << quad_obj.s2 << std :: endl
    << "length of side 3 == " << quad_obj.s3 << std :: endl
    << "length of side 4 == " << quad_obj.s4 << std :: endl;

    return os;

}