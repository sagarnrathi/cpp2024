#include<cstdio>
void swap(int *p1,int *p2);
void test_swap(void);

void show_array_1(int *a,int N);
void show_array_2(const int *a,int N);

int main(void){
    test_swap();
    return(0);
}

void test_swap(void){
    int m = 10;
    int n = 20;
    printf("before : m=%d,n = %d \n",m,n);
    swap(&m,&n);
    printf("after :m = %d, n = %d \n",m,n);
}

void swap(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}