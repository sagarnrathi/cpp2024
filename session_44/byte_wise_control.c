#include<stdio.h>
#include<stdlib.h>

unsigned long long int N = 0;

int main(void){
    printf("N = %llx \n",N);
    *(unsigned char *)&N = 0xff;
    printf("N = %llx \n",N);
    *(unsigned short*) ((unsigned char *)&N + 1) = 0xffff;
    printf("N = %llx \n",N);
    *(unsigned int *)((unsigned char *)&N + 3)  = 0xffffffff;
    printf("N = %llx \n",N);
    *(unsigned char*)((unsigned char *)&N + 7) = 0xaa;
    printf("N = %llx \n",N);
    return(0);
}