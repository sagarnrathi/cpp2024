#include<iostream>

class B{
    public :
        virtual void f(){
            std :: cout << " in B ::f()" << std :: endl;
        }      
};

class D : public B{
    public :
        void f(){
            std :: cout << " in D :: f()"<< std :: endl;
        }

        void g(){
            std :: cout << "in D :: g()"<< std :: endl;
        }
};

int main(void){
    B *pB = new D;
    pB->f();
    dynamic_cast<D*>(pB)->g();
    reinterpret_cast<D*>(pB) -> g();

    delete pB;
    pB = 0;

    return (0);
}