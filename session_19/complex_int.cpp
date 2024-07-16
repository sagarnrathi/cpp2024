#include<cstdio>

class Complex{
     private :
         double re,im;
    public :
        Complex() : re(0.0),im(0.0){

        }

        Complex(double _re,double _im) : re(_re),im(_im){

        }
        
        void show(const char *msg) const{
            if(msg)
               puts(msg);
            printf("(%.3lf) + i(%.3lf) \n",re,im);
        }

        Complex operator+(const Complex &other) const {
            Complex result;
            result.re = this -> re + other.re ;
            result.im = this -> im + other.im ;

            return(result);
        }

        Complex operator-(const Complex &other) const{
            Complex result;
            result.re = this -> re - other.re ;
            result.im = this-> im - other.im ;
            return(result);
        }

};

int main(void){
    Complex c1(1.1,2.2);
    Complex c2(3.3,4.4);

    Complex summation = c1  + c2 ;
    Complex sub = c1 - c2;

    c1.show(" c1 : ");
    c2.show("c2 : ");
    summation.show("summ");
    sub.show("sub");

    return(0);
}