#include<iostream>
#include<cstdlib>

class CPAint{
     private :
         int n;
    public:
         CPAint() : n(0){

         }
         CPAint(int _n) : n(_n){

         }

         void show(const char *msg) const{
            if(msg)
                printf("%s :",msg);

            printf("%d\n",n);
         }

         CPAint operator+(const CPAint &other) const {
            CPAint result;
            result.n = this -> n + other.n ;

            return(result);
         }

         CPAint operator-(const CPAint &other) const {
            CPAint result;
            result.n = this -> n - other.n ;
            return(result);
         }

         CPAint operator*(const CPAint &other) const {
            CPAint result;
            result.n = this -> n * other.n ;
            return (result);
         }

         CPAint operator/ (const CPAint &other) const {
            CPAint result ;
            result.n = this -> n / other.n ;
            return result;
         }

         CPAint operator %(const CPAint &other) const {
            CPAint result ;
            result.n = this -> n % other.n ;
            return result;
         }

         CPAint operator <<(const CPAint &other) const {
            CPAint result ;
            result.n = this -> n << other.n ;
            return result;
         }

         CPAint operator>>(const CPAint &other) const {
            CPAint result;
            result.n = this -> n >> other.n ;
            return result;
         }

         CPAint operator &(const CPAint &other) const {
            CPAint result;
            result.n = this -> n & other.n ;
            return result;
         }

         CPAint operator |(const CPAint &other) const {
            CPAint result ;
            result.n = this -> n | other.n ;
            return result;
         }
         
         CPAint operator^(const CPAint &other) const {
            CPAint result;
            result.n = this -> n & other.n ;
            return result;
         }
         CPAint operator~() const {
            CPAint result;
            result.n = ~this->n;
            return result; 
         }

         CPAint operator&&(const CPAint &other) const {
            CPAint result ;
            result.n = this -> n && other.n ;
            return result;
         }
         CPAint operator|| (const CPAint &other) const {
            CPAint result ;
            result.n = this -> n || other.n ;
            return result ;
         }

         CPAint operator!() const {
            CPAint result;
            result.n = !this-> n;
            return result;
         }

         bool operator>(const CPAint &other )  const {
            
            return this-> n > other.n ;
             
         }

         bool operator>=(const CPAint &other) const {
            
           return  this -> n >= other.n ;
            
         }

         bool operator<(const CPAint &other) const{
           
            return  this -> n < other.n ;
             
         }

         bool operator<=(const CPAint &other) const {
           
            return this -> n <= other.n;
             
         }

         bool operator==(const CPAint &other) const {
            
            return this ->n == other.n ;
            
         }

         bool operator !=(const CPAint &other) const{
            
            return this -> n != other.n;
             
         }

         CPAint operator++(){
            this -> n = this -> n + 1;
            return *this;
         }

         CPAint operator++(int){
            CPAint temp(this->n);
            this -> n = this -> n + 1 ;
            return temp;
         }

         CPAint operator--(){
            this -> n = this -> n -1  ;
            return *this;
         }

         CPAint operator--(int){
            CPAint result(this -> n);
            this -> n = this -> n + 1 ;
            return result; 
         }

};

int main(void){
    CPAint n1(22);
    CPAint n2(7);
    CPAint result;

    n1.show("n1 :");
    n2.show("n2 :");

    result = n1 + n2 ;
    result.show("summation");

    result = n1 - n2 ;
    result.show("subtraction");

    result = n1 * n2 ;
    result.show("multi");

    result = n1 / n2 ;
    result.show("division");

    result = n1 % n2 ;
    result.show("modulud");

    result = n1 << n2 ;
    result.show("right shift");

    result = n1 >> n2 ;
    result.show("left shift");

    result = n1 & n2 ;
    result.show("only and");

    result = n1 | n2 ;
    result.show("only or ");

    result  = n1 ^ n2 ;
    result.show("bitwise xor ");

    result = ~n1 ;
    result.show("negation");

    result = n1 && n2 ;
    result.show("logical and ");

    result = n1 || n2 ;
    result.show("logical or ");

    result = !n1;
    result.show("logical not of n1");

    result = n1 > n2;
    result.show("greater");

   result = n1 >= n2 ;
   result.show("greater equal");

   result = n1 < n2 ;
   result.show("leass");
   result = n1 <= n2 ;
   result.show("leass than equal");


   result = n1 == n2;
   result.show("equal equal to");

   result  = n1 != n2 ;
   result.show("not equal");

   n1.show("before increment");;
   result = ++n1;
   n1.show("after increment ");
   result.show("result is");

   n2.show("before post incremet ");
   result = n2++;
   n2.show("after post increment") ;
   result.show("result after post increment");

   n1.show("before pre decremetn");
   result = --n1;
   n1.show("after pre decrement");
   result.show("result after pre decremetn");

   n2.show("before post decrement");
   result = n2--;
   n2.show("after post decrement");
   result.show("result after post decrement");
   

   return EXIT_SUCCESS ;
}