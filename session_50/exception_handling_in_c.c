#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

#define ARR_SIZE 8
#define ERROR_NEGATIVE_DATA 1

int a[ARR_SIZE] = {10,20,-30,40,-50,60,70,-80};

jmp_buf  jump_buffer;

void f1(int i,int n);
void f2(int i,int n);
void f3(int i,int n);

int main(void){
    
    int ret;
    int i;

    ret = setjmp(jump_buffer);
    if(ret == 0)
      puts("JUMP LOCATION IS SET");
    else if(ret == ERROR_NEGATIVE_DATA){
        printf("main(): apologies for -ve number at index %d\n",i);
        goto next;
    }
    i= 0;
    while(i < ARR_SIZE){
        f1(i,a[i]);
   next:
       printf("--------INDEX- %d--- done ----\n",i);
       i = i + 1;
    }
    return (0);
}

void f1(int i,int n){
    f2(i,n);
    puts("f1():code of f1() after call to f2()");
}

void f2(int i,int n){
    f3(i,n);
    puts("f2():code of f2() after call to f3()");
}
void f3(int i,int n){
    if(n<0)
       longjmp(jump_buffer,ERROR_NEGATIVE_DATA);
    else 
    printf("f3():a[%d]:%d \n",i,a[i]);
}