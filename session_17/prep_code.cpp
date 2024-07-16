#include<cstdio>
#include<cstdlib>

class complex {

   private :
       double re;
       double im ;
    public :
       complex():re(0.0),im(0.0){

       }

       complex(double _re,double _im) : re(_re),im(_im){

       }

       complex add(complex second){
        complex summation_obj;

        summation_obj.re = this -> re + second.re ;
        summation_obj.re = this ->im + second.im;

        return summation_obj ;
       }

       void show(const char *msg) const{
        if(msg)
           puts(msg);
        printf("%.3llf + %.3llf \n",re,im);
       }

};

int main(void){
    complex c1;
    complex c2(1.1,2.2);
    complex sum;
    c1.show("c1 : ");
    c2.show("c2 : ");
    sum = c1.add(c2);
    sum.show("additon of c1 and c2");

    return EXIT_SUCCESS;
}