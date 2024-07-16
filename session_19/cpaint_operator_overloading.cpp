#include<iostream>
#include<cstdlib>

class cpaint{
    private :
       int n;
    public :
       cpaint() : n(0){

       }
       cpaint(int _n): n(_n){
        
       }

       void show(const char *msg) const {
        if(msg)
           printf("%s :",msg);
        printf("%d \n",n);
       }
       
       cpaint operator+(const cpaint&  other) const {
        cpaint result;
        result.n = this -> n + other.n ;
        return (result);
       }

       cpaint operator- (const cpaint &other) const {
        cpaint result ;
        result.n = this -> n - other.n ;
        return (result);
       }

       cpaint operator*(const cpaint &other) const{
        cpaint result;
        result.n = this-> n * other.n ;
        return (result);
       }

       cpaint operator/ (const cpaint &other) const {
        cpaint result;
        result.n = this -> n/ other.n;
        return (result);
       }

       cpaint operator%(const cpaint &other) const {
        cpaint result;
        result.n = this -> n % other.n ;
        return (result);
       }

};

int main(void){
    cpaint n1(20);
    cpaint n2(7);
    cpaint result;

    n1.show("n1");
    n2.show("n2");

    result = n1 + n2;

    result.show("summation ");

    result = n1 - n2 ;
    result.show("sub");

    result = n1 * n2 ;
    result.show("multi");

    result = n1 / n2;
    result.show("division");

    result = n1 % n2 ;
    result.show("modus");

    return EXIT_SUCCESS ;

}