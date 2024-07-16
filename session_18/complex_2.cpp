#include<cstdio>
#include<cstdlib>

class Complex{

  private :
     double re,im;
  
  public :
     Complex(): re(0.0),im(0.0){

     }

     Complex (double _re,double _im) : re(_re) ,im(_im){

     }

     Complex add(const Complex& other){
        Complex summation;
        summation.re = this ->re + other.re;
        summation.im = this -> im + other.re;

        return(summation);
     }

     void show(const char *msg){
        if(msg)
           puts(msg);
        printf("(%.2lf) + i(%.2lf) \n",this->re ,this->im);
     }

};
int main(void){

   Complex c1(1.1,2.2);
   Complex c2(3.2,4.1);

   c1.show("showing c1 :");
   c2.show("showing c2 : ");
   Complex sum;
   sum = c1.add(c2);
   sum.show("showinf sum of c1 and c2 \n");
   return EXIT_SUCCESS;   
}