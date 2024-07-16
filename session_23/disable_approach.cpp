#include<iostream>
#include<stdexcept>

class HasPtr{
    private :
         int n;
         int *ptr;
    public :
       HasPtr( int _n,int _val) : n(_n),ptr(new int(_val)){

       }
        HasPtr(const HasPtr &rhs){
            throw std :: runtime_error("can not initialize new object by existing object");
        }

        HasPtr &operator=(const HasPtr &rhs){
            throw std :: runtime_error("can not initialize new object with = operator");
        }

        ~HasPtr(){
            delete ptr;
        }
};

int main(void){
    HasPtr h1(10,200);
    HasPtr h2(20,300);

    try {
        h1 = h2 ;
    }
    catch(std :: runtime_error &e) {
           std :: cout  << e.what() << std :: endl;
    }

    try {
       HasPtr h3(h2);

    }

    catch (std :: runtime_error &e){
        std :: cout << e.what() << std :: endl;
    }
   
   std :: cout << "application terminated successfully" << std :: endl;

   return EXIT_SUCCESS;

}