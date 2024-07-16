#include<cstdio>
#include<cstdlib>

class Complex{
    
     private :
            double re,im;
     public :
        Complex() : re(0.0),im(0.0){

        }

        Complex(double _re,double _im) : re(_re),im(_im)
        {

        }
        Complex add(Complex other) const {
          Complex summation_object;
          summation_object.re = this -> re + other.re ;
          summation_object.im = this -> im + other.im ;
          return (summation_object); 
        }
        void show( const char *msg){
            if(msg)
              puts(msg);
            
            printf("(%.2lf) +i(%.2lf) \n",this->re,this->im);
            
        }

};


int main(void){
    Complex c1(1.1,2.2);
    Complex c2(3.2,4.1);
    c1.show("showing c1 : ");
    c2.show("showing c2 : ");

    Complex sum;
    sum = c1.add(c2);
    sum.show("showing summation of c1 nd c2 ");

    return EXIT_SUCCESS;
}