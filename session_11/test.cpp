#include<cstdio>
#include<cstdlib>

#define N 100

int arr[N];

const int gnum = 100;

void test(void);

int main(void){
    test();
    return(0);
}

void test(void){
    const int local_num = 100;
    int *ptr = NULL;
    ptr = const_cast<int *>(&local_num);

    printf("*ptr = %d \n,",*ptr);
    *ptr = 77;
    printf("*pte = %d \n",*ptr) ;
    printf("local num = %d \n",local_num);
    printf("%llu \n",(unsigned long long)ptr);
    printf("%llu",(unsigned long long)local_num);
}
