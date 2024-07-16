#include<stdio.h>
#include<stdlib.h>

const int gnum = 100;

void test(void);

int main(void){
    test();
    puts("main");
    int *ptr = &gnum;
    *ptr =999;
    puts("end");
    return(0);
}

void test(void){
    const int local_num = 300;
    int *ptr = NULL;
    ptr = &local_num;

    printf("*ptr = %d \n",*ptr);
    *ptr = 600;
    printf("afere *ptr = %d \n",*ptr);
    printf("local = %d \n",local_num);

    
}