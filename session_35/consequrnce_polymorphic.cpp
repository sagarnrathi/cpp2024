#include<iostream>
#include<typeinfo>

class B1{
     public :
        void f(){
            std :: cout << "In B1 :: f()" << std :: endl;
        }
};

class D1 : public B1{
    public :
        void f(){
            std :: cout << "in D1 :: f()" << std :: endl;
        }
};

class B2 {
    public :
      virtual void f(){
        std :: cout << "in B2 :: f() " << std ::endl;
      }
};

class D2: public B2{

    public :
       void f(){
        std :: cout << "in D2 :: f() " << std :: endl;
       }

};

int main(void){
    int a = 10;
    float f = 3.14;
    auto d = 34567.8765;

    std :: cout << "typeid(a).name -> " << typeid(a).name()<< std :: endl;
    std :: cout << "typeid(f).name -> " << typeid(f).name() << std ::endl;
    std :: cout << "typeid(d).name -> " << typeid(d).name()<< std :: endl;
    std :: cout << "typeid(typeid(a).name()) ->" << typeid(typeid(a)).name()  << std ::endl;

    D1 objd1;
    D2 objd2;

    B1 *pb1 = &objd1;
    B2 *pb2 = &objd2;

    std :: cout << "typeid(pb1).name() -> " << typeid(pb1).name() << std :: endl;
    std :: cout << "typeid(pb2).name() -> " << typeid(pb2).name() << std::endl;

    std :: cout <<"typeid(*pb1).name() -> " << typeid(*pb1).name() << std :: endl;
    std :: cout <<"typeid(*pb2).name() -> " << typeid(*pb2).name() << std::endl;
}