#ifndef _SQUARE_HPP
#define _SQUARE_HPP

#include "Quadrilateral.hpp"

class Square : public Qadrilateral{
    private :
        double s;
    public :
        Square(double _s);
        double area() const;
        double diagonal() const;
};

#endif