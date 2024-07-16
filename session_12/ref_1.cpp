#include<cstdio>

int main(void){
    int n = 100;
    int &a = n;

    printf(" &n = %llu, &ref = %llu \n",(unsigned long long)&n,(unsigned long long)&a);
   
   return(0);
}