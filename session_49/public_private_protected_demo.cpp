#include<iostream>

class B1{
    private :
       int n1,n2;
    protected :
       int x,y;
    public :
        int p,q;
        B1():n1(100),n2(200),x(300),y(400),p(500),q(600){

        }
};

class D1: public B1{
    protected :
        int d1_pro;
    public :
       D1(): d1_pro(-1){}
       void show(const char *msg = 0) const{
        if(msg) 
            std :: cout << msg << std ::endl;
        
        std :: cout <<"public members of B1 :"<< std::endl;
        std :: cout <<"p :" <<p<<"  q:" << q << std ::endl;

        std :: cout <<"protected members of B1 :"  << std ::endl;
        std:: cout <<"x :" <<x << "  y :" << y << std::endl;
       }
};

class D11 : public D1{
    public :
        void show(const char *msg = 0){
            if(msg)
               std:: cout << msg<<std::endl;
            std :: cout << "accessing protected of D1"<< std :: endl;
            std :: cout << "d1_prot :  "<< d1_pro << std :: endl;
            std :: cout << "public members of B1 :" << std ::endl;
            std :: cout << " p : "<< p <<" q : "<< q<< std ::endl;
            std :: cout <<" protected members of B1 : "<< std :: endl;
            std :: cout <<" x :"<< x <<" y: " << y << std ::endl;
        }
};

class B2{
    private :
        int n1,n2;
    protected :
       int x,y;
    public :
       int p,q;
       B2(): n1(100),n2(200),x(300),y(400),p(500),q(600){

       }
};

class D2 : protected B2{
    protected :
       int d2_prot;

    public :
        D2() : d2_prot(-1){
        }
    void show(const char *msg = 0) const{
        if(msg)
            std :: cout <<msg <<std::endl;
        std :: cout <<"PUBLIC MEMBERS OF B2 :" <<std :: endl;
        std :: cout <<"p : "<<p<<"q : "<<q << std ::endl;
        std :: cout <<"protected  members of B2 : "<< std ::endl;
        std::cout <<"x : "<< x<<"y: "<<y<< std ::endl;
    }

};

class D22 : public D2{
    public :
       void show(const char *msg = 0) const{
        if(msg)
           std :: cout << msg << std::endl;
        std :: cout <<"accessing protected members of D2 :"<<  std::endl;
        std:: cout <<"d2 prot"<<d2_prot << std::endl;

        std :: cout <<"public memebers of b2 : "<< std ::endl;
        std :: cout <<"p:"<<p << "q:"<< q<< std::endl;

        std :: cout <<"protected members of b2 : "<< std :: endl;
        std :: cout << "x "<< x << "Y "<< y<<std ::endl;
       }

};

class B3{
     private :
        int n1,n2;
    protected :
       int x,y;
    public :
       int p,q;
       B3():n1(100),n2(200),x(300),y(400),p(500),q(600){

       }
};

class D3 : private B3{
    protected :
       int d3_prot;
    public :
        D3 (): d3_prot(-1){}

        void show(const char *msg = 0){
            if(msg)
               std :: cout <<msg<<std::endl;
            std :: cout << "PUBLIC MEMBERS OF B3  :"<< std::endl;
            std::cout <<"p : "<< p<<" q: "<< q<< std::endl;
            std :: cout << "protected members of B3:"<< std::endl;
            std :: cout <<"x : " << x <<" y:"<< y<<std::endl;
        }
      
};

class D33 : public D3{
    public :
       void show(const char *msg = 0){
        if(msg)
           std :: cout<<msg<<std ::endl;
        std :: cout <<"accessing protected of D3 :"<< std ::endl;
        std :: cout <<"D3_prot : "<< d3_prot<<std ::endl;
        std :: cout <<"trying to access pulic members p,q,of B3"<< std :: endl;
        std :: cout <<"trying to access protected members of B3"<< std ::endl;
       }

};

void test_1(void);
void test_2(void);
void test_3(void);
int main(void){
      test_1();
      test_2();
      test_3();
      return 0;
}

void test_1(void){
    D1 obj1;
   
    obj1.show();

     D11 obj11;
     obj11.show();
     std :: cout <<"test1() accessing public of b1  from objd1" << std ::endl;
     std :: cout <<"p,q of B1 from objd1 :"<<obj1.p <<" "<<obj1.q << std ::endl;
     std :: cout << "test_1() : public inheritance over " << std ::endl;
}

void test_2(){
    D2 objd2;
    objd2.show("D2::show():");

    D22 objd22;
    objd22.show("D22.show():");
    std ::cout << "test2: trying to access public b2 from objd2()"<< std ::endl;
    //objd2.p << objd2.q

    std :: cout <<" test_2 () : protectd inheritance over "<< std :: endl;
}

void test_3(){

    D3 objd3;
    objd3.show("D3 :: show()");

    D33 objD33;
    objD33.show("D33 :: show()");

    std :: cout <<"test 3():trying to access B3 from objD3()"<<std::endl;

    std :: cout <<"test3(): private inheritance over "<< std ::endl;

}