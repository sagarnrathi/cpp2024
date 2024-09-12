#ifndef _QUADRILATERAL_HPP
#define _QUADRILATERAL_HPP

#include<iostream>

class Qadrilateral{
    private :
        double s1,s2,s3,s4;
    public :
        Qadrilateral(double _s1,double _s2,double _s3,double _s4);
        double perimeter() const;
        virtual double area() const;

        friend std :: ostream & operator<<(std :: ostream &os,
        const Qadrilateral &quad_obj);
        
};


#endif