#include<cstdio>
#include<cstdlib>

void test_function_1(void) ;
void test_function_2(void) ;

const int gc_num = 100 ;

int g_num ;

int main(void){
    test_function_1();
    test_function_2();

    return 0;
}

void test_function_1(void){
    int m1,m2,m3;
    int *p1;
    p1 = &m1;
    
    const int *p2 = &m2 ;
    int const *p3 = &m3;

    int *const p4 = &m1 ;

    const int *const p5 = & m1;
}

void test_function_2(void){
    int l_num;
    const int lc_num = 2;

    int *p1 = &l_num;
    p1 = &g_num;
    const  int *p2 ;
    p2 = &g_num;
    p2 = &l_num;
    p2 = &gc_num;
    p2 = &lc_num;

    int *const p3 = &l_num;
    int * const p4 = &g_num;

    const int  *const p5 = &l_num;
    const int  * const p6 = &g_num;
    const int *const p7  = &lc_num;
    const int *const p8 = &gc_num;
}

