#include<stdio.h>
#include<stdlib.h>

#define OFFSET_OF(type,member)  ((unsigned long long int)(&((type *)0)-> member))

struct A{
    int a;
    char b ;
    float c;
};

void compute_offset_1(void);
void compute_offset_2(void);
void compute_offset_3(void);
void compute_offset_4(void);
void compute_offset_5(void);

int main(void){
    compute_offset_1();
    compute_offset_2();
    compute_offset_3();
    compute_offset_4();
    compute_offset_5();
    return 0;
}
void compute_offset_1()
{
    struct A inA;
    unsigned long long int  offset_c;

    offset_c = (unsigned long long int )&inA.c - ( unsigned long long int ) &inA ;

    printf("col1 : offset_c = %llu \n",offset_c);
}

void compute_offset_2(){
    struct A * pa = NULL;
    pa = (struct A *) malloc(sizeof(struct A));
    if(pa == NULL){
        puts("failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    unsigned long long int offset_c ;
    offset_c = (unsigned long long int )&pa->c - (unsigned long long int )pa;
    printf("col2 : offset_c = %llu\n",offset_c);
    free(pa);
    pa = NULL;
}

void compute_offset_3(){
    struct A *pa = 0;
    unsigned long long int offset_c;
    offset_c = (unsigned long long int)&pa-> c - (unsigned long long int)pa;
    printf("col3 offset_c = %llu \n",offset_c);
}

void compute_offset_4(){
    printf("col4 offset_c = %llu",(unsigned long long int)(&((struct A *)0) -> c));
}

void compute_offset_5(){
    unsigned long long int offset_a,offset_b,offset_c;
    offset_a = OFFSET_OF(struct A,a);
    offset_b = OFFSET_OF(struct A,b);
    offset_c = OFFSET_OF(struct A,c);
    printf("co5:offset_a=%llu, offset_b=%llu, offset_c=%llu\n", 
        offset_a, offset_b, offset_c); 

}