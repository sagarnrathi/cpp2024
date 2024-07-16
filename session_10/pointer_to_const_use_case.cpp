#include<cstdio>

void swap(int *p1,int *p2);
void test_swap(void);

void show_array_1(int *a,int n);
void show_array_2(const int *a,int n);

int main(void){
    test_swap();
    return(0);
}

void test_swap(void){

    int m = 10,n = 20;
    printf("BEFORE : M =%d, n = %d \n",m,n);
    swap(&m,&n);
    printf("after : M = %d,n = %d \n",m,n);

}

void swap(int *p1,int *p2){
    int tmp = *p1 ;
    *p1 = *p2;
    *p2 = tmp;
}

void show_array_1(int *p1,int n){
    int i;
    for(i = 0;i<n;i++){
        printf("a[%d] : %d  \n",i,*(p1 +i));
    }
}

void show_array_2(const int *a,int n){
  int i ;
  for(i = 0;i<n;++i)
      printf("a[%d] :%d \n",i,*(a + i));
}
