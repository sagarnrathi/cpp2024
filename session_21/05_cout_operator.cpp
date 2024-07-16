#include<iostream>

int add(int,int);
int sub(int,int);

class ArithmaticOPerators{
   
   private :
       int (*ptr_func)(int,int);
    public:
        ArithmaticOPerators() : ptr_func(0){}

        void set( int (*pfn)(int,int))
        {
            ptr_func = pfn ;
        }

        int operator()(int op1,int op2){
            return this -> ptr_func(op1,op2);
        }

};

int main(void){
    ArithmaticOPerators ao;
    ao.set(add);
    int ret = ao(100,200);

    std :: cout << "add : ret " << ret << std ::endl;

    ao.set(sub);

    std :: cout << "sub : ret " << ret << std :: endl;

    return 0;
}

int add(int a , int b){
    return a + b;
}

int sub(int a ,int b){
    return a - b;
}