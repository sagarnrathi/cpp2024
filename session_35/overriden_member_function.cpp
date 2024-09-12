#include<cstdio>

class Base{

    public :
       void f(){
        puts("in base :: f()");
       }

       void g(){
        puts("in base ::g()");
       }

};

class Derived : public Base {
    public :
        void g(){
           puts("in derived g()");
        }

        void h(){
            puts("in derived :: h()");
        }
};

void test_base(void);
void test(void);

int main(void){
    test_base();
    test();
    return 0;
}

void test_base(void){
    Base *pb1 = new Base;
    pb1 -> f();
    pb1 ->g();

    delete pb1;
    pb1 = 0;
}

void test(void){
    Derived D;
    Derived *pD = &D;
    Base *pB = 0;
    pB = &D;
    pD ->f();
    pD->h();
    pD -> g();
    

    pB -> g();
    pB -> f();
}