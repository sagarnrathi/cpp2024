#include<iostream>
#include<cmath>
#include<ctime>

class B{

    public :
         virtual void f(){
            std :: cout << "In B :: f()" << std ::endl;
         }
};

class D1 : public B{
    public :
       void f(){
        std :: cout <<"D1 :: f() " << std::endl;
       }
};

class D2 : public B{
    public:
       void f(){
         std :: cout <<"D2 :: F()" << std :: endl;
       }
};

class D3 : public B{

   public :
       void f(){
         std :: cout <<"D2 :: f()" << std :: endl;
       }
};

int main(void){
   B *pb = 0;
   srand(time(0));

   switch(rand()%3){

      case 0:
         pb = new D1;
         puts("in case 0");
         break;
      case 1:
         pb = new D2;
         puts("in case 1");
         break;
      case 2:
          pb = new D3;
          puts("in case 3");
          break;
   }

   std :: cout << "typeid(*pb).name() -> " << typeid(*pb).name() << std ::endl;

   return 0;
}  