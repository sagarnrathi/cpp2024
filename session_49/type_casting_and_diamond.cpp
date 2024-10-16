#include<iostream>

class B{

    private :
         int n1,n2;
    public :
        B(): n1(100),n2(200){

        }
        void show(const char *msg = 0) const{
            if(msg)
               std :: cout << msg << std :: endl;
            std :: cout <<" n1 : "<< n1 <<" n2 : "<<n2 << std ::endl;
        }
      void set(int _n1,int _n2){
        n1 = _n1;
        n2 = _n2;   
      }
};

class B1 : public B{
    private :
       double d1,d2;
};

class B2 : public B{
    private :
       int a[4];
};

class D : public B1, public B2{
    private : 
        int b[8];
};

int main(void){
    D objD;
    dynamic_cast<B*> (dynamic_cast<B1*>(&objD))->show("before B in B1");

    dynamic_cast<B*>(dynamic_cast<B2*>(&objD))->show("before B in B2");

    dynamic_cast<B*>(dynamic_cast<B1*>(&objD))->set(444,333);

    dynamic_cast<B*>(dynamic_cast<B1*>(&objD))->show("after B in B1");
    
    dynamic_cast<B*>(dynamic_cast<B2*>(&objD))->show("after B in B2");

    return EXIT_SUCCESS;
}