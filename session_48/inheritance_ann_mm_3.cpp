#include<iostream>

const int ARR_SIZE = 4;

class B{
    private :
      int n1,n2;
    public :
       B() : n1(100),n2(200){

       }
    
    void show(const char *msg) const {
        if(msg)
            std :: cout << "msg :" << msg << std ::endl;
        std :: cout <<"B :: show() : n1 :"<<n1<<" n2 :" << n2 << std ::endl;
    }

    void set(int _n1,int _n2){
        n1 = _n1;
        n2 = _n2;
    }
};

class D1 : public B{
    private :
        double d1,d2;
    public :
       D1() : d1(1.1),d2(2.2){

       }

       void show(const char *msg) const {
        if(msg)
            std :: cout << "msg :" << msg<< std ::endl;
        std :: cout <<"D1 : show() : d1 :"<<d1 <<" d2: "<< d2<< std :: endl;
       }

       void set(double _d1,double _d2){
        d1 = _d1;
        d2 = _d2;
       }
};


class D2 : public D1{
    private :
       int a[ARR_SIZE];
    public :
      D2(){
        for(std :: size_t i = 0;i != ARR_SIZE;++i)
           a[i] = (i + 1) * 1111;
      }

      void show(const char *msg) const {
        if(msg)
           std :: cout <<"msg"<<msg<< std :: endl;
        for(std :: size_t i = 0; i!=ARR_SIZE;++i)
            std :: cout <<"a["<<i<<"]"<<a[i]<< std ::endl;
      }
};

int main(void){
    D2 objD2;
    objD2.show("showing D2 specific part in objd2 :");
    (dynamic_cast<D1 *>(&objD2))->show("D1 in D2");
    (dynamic_cast<B*>(&objD2))->show("B in d2");

    B objB;
    D1 objD1;
    objB.show("before showing standalone object of b viz objB :");
    objD1.show("before showint standalone object of D");
    (dynamic_cast<B *>(&objD1))->show("from D1 to B");
    (dynamic_cast<D1 *>(&objD2))->set(3.33,4.44);
    (dynamic_cast<B *>(&objD2))-> set(-100,-30);
    (dynamic_cast<D1 *>(&objD2))->show("after modify d2 from d1");
    (dynamic_cast<B *>(&objD2))->show("after modify d2 from b");

    objB = objD2;
    objD1 = objD2;

    objB.show("standalone b from d2");
    objD1.show("standalone d from d1;");
    (dynamic_cast<B*>(&objD1))->show("B in d1");

    return EXIT_SUCCESS;
}