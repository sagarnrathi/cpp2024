#ifndef _SQUARE_HPP
#define _SQUARE_HPP

#include"quadrilateral.hpp"

class square : public quadrilateral{
    
    private :
      double s;
    public :
        square(double _s);
        double diagonal() const;
};

#endif