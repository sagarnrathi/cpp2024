#include<iostream>

class A{
    private :
        int a;
        float b;
        char c;
};

class B{
    private :
        double x,y;
};

int main(void){
    B objb;
    const int n = 100;

    A * Pa =  reinterpret_cast<A*>(&objb);
    int *ptr = (int *)(&n);
     printf("%d",*ptr);
    *ptr = 500;
    printf("%d",*ptr);
    puts("all");
    return 0;
}