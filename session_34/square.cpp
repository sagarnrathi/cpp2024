#include<cmath>
#include "square.hpp"

square :: square(double _s) : quadrilateral(_s,_s,_s,_s),s(_s){

}
double square ::diagonal() const {
    return sqrt(2)*s ;
}