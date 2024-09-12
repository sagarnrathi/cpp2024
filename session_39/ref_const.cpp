#include<iostream>

int main(void){
    int m;
    int *p;
    const int *p1;
    int * const p2= &m ;
    const int *const p4 =&m;
    int &ref = m;
    ref = 100;
    ref  = 200;

    const int &cref = m;
    const int &ref1 = 400;

    return EXIT_SUCCESS;
   

}