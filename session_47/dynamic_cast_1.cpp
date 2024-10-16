#include<cstdlib>
#include<typeinfo>
#include<iostream>

class B{
    public :
       virtual void f(){
        std:: cout <<"in B : f()"<< std:: endl;
       }
};

class D1 : public B{
      
      public :
         void f(){
            std :: cout  << " in D1: f()" << std :: endl;
         }
         void g1(){
            std :: cout <<"in D1 : g1()" << std :: endl;
         }

};

class D2 : public B{
    public :
    void f(){
        std :: cout << "in D2 : f()" << std :: endl;
    }

    void g2(){
        std :: cout << " in D2 : g2() "<< std :: endl;
    }
        
};


class D3 : public B {
    public :
      void f(){
        std :: cout << "in d3 : f()" << std :: endl;
      }

      void g3(){
        std :: cout << " in d3 : g3()" << std :: endl;
      }

};

void invoke_all(B *pb);

int main(void){
    D1 obj1;
    D2 obj2;
    D3 obj3;

    invoke_all(&obj1);
    invoke_all(&obj2);
    invoke_all(&obj3);

    return 0;
}

void invoke_all(B *pb){
    pb->f();
    if(typeid(*pb) == typeid(D1))
     dynamic_cast<D1 *> (pb)-> g1();
    else if(typeid(*pb)== typeid(D2))
       dynamic_cast<D2*> (pb)-> g2();
    else if(typeid(*pb)== typeid(D3))
       dynamic_cast<D3*>(pb) ->g3();

}