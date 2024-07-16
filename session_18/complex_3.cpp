#include<cstdio>
#include<cstdlib>

class Complex{
    private :
        double re,im;
    
    public :
       Complex() : re(0.0),im(0.0){

       }
       Complex(double _re,double _im): re(_re),im(_im){

       }

       Complex & add(const Complex &other) const {
        Complex summation;
        summation.re = this -> re + other.re ;
        summation.im = this -> im + other.im  ;

        return(summation);
       }

       void show(const char *msg){
        if(msg)
            puts(msg);
        
        printf("(%.2lf) + i(%.2lf) \n", this -> re,this ->im);
        
       }

};

int main(void){
    Complex c1(1.1,2.2);
    Complex c2(2.3,4.4);
    c1.show("c1 :");
    c2.show("c2 : ");
    Complex &sum = c1.add(c2);
    sum.show("showing summation c1 and c2");
    return EXIT_SUCCESS;
}