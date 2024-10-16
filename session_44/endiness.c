#include<stdio.h>
#include<stdlib.h>

int main(void){
    unsigned long long int N = 0x0a0b0c0d;
    if(*(unsigned char *)&N == 0x0a) 
      puts(" its big endian");
    else if(*(unsigned char *)&N == 0x0d) 
      puts(" its little endian");
    else  
       puts("no Idea");
    
    return 0;
}