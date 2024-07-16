#include<cstdio>
#include<cstdlib>

class Complex{
    private :
        double re,im;
   
    public :
         Complex() : re(0.0),im(0.0){

         }
         Complex(double _re,double _im):re(_re),im(_im){

         }

         Complex * add(const Complex &other) const {
            Complex *psum = new Complex;
            psum -> re = this -> re + other.re ;
            psum -> im = this -> im + other.im;
            return psum;
         }

         void show(const char *msg) const
         {
            if(msg)
               puts(msg);
            printf("(%.2lf) + i(%.2lf) \n",this->re,this->im);
         }
} ;

int main(void){
    Complex c1(1.1,2.2);
    Complex c2(3.3,4.4);
    Complex c3(5.5,6.6);

    c1.show("showing c1");
    c2.show("showing c2 ");
    c3.show("showing c3");
    Complex * sum = (c1.add(c2))->add(c3);
    sum->show("after 3 add");
    
}