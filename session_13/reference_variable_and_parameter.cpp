#include<stdlib.h>

void test1(int m);
void test2(int *p);
void test3(int &ref);

int test4();
int *test5();
int &test6();


int main(void){

    int n  = 500;
    test1(n);
    test1(1000);

    test2(&n);
    //test2(1000);
    test3(n);
    //test3(1000);

}