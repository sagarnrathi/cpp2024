#include<cstdio>

class Base{
    public:
        void base_specific_function(){
            puts("base :: base specific function : I am defined only in base");

        }
        
       virtual void f1(){
            puts("In base :: f1() : base version");
        }
        virtual void f2()
        {
            puts("in base :: f2() : base version");

        }
};

class Derived : public Base {
    
    public:
         void f1(){
            puts("Derived :: f1() :overriden by derived version ");
         }

         void f2(){
            puts("Derived :: f2() : overriden by derived version ");
         }

         void derived_specific_function(){
            puts("Derived : derived specific function ()");
         }
         
} ;


int main(){
    Derived D;
    Base *p = &D;
    p->base_specific_function();
    p->f1();
    p->f2();
}