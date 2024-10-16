#include<stdio.h>
#include<stdlib.h>

#ifndef OFFSET_OF
#define OFFSET_OF(type,member)  ((size_t)(&((type *)0) -> member))
#endif

#ifndef CONTAINER_OF
#define CONTAINER_OF(addr,type,member)   ((type*)((size_t)addr -OFFSET_OF(type,member)));
#endif

struct A{
   int a;
   char b;
   float c;
};

void test_function(float *pf);
void test_container_of(float *pf);

int main(void){
    struct A inA1 = {10,'A',1.1f};
    struct A inA2 = {20,'B',2.2f};
    struct A inA3 = {30,'C',3.3f};

    test_function(&inA1.c);
    test_function(&inA2.c);
    test_function(&inA3.c);

    test_container_of(&inA1.c);
    test_container_of(&inA2.c);
    test_container_of(&inA3.c);

}

void test_function(float *pf){
     
     struct A * pa =( struct A *)((size_t)pf -(size_t)(&((struct A *)0) ->c));
     printf("pa ->a = %d,pa -> b = %c,pa -> c = %f\n",pa->a,pa->b,pa ->c);
     if(&pa -> c == pf)
       puts("verified");
}

void test_container_of(float *pf){
    puts("on test comtainer of");
    struct A *pa = CONTAINER_OF(pf,struct A,c);
    printf("pA -> a = %d,pa -> b = %c,pa -> c = %f \n",pa->a,pa -> b,pa ->c);
    if(&pa -> c == pf)
      puts("verified");

}