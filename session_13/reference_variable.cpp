#include<cstdio>
#include<cstdlib>

void test(void);

int main(void){
    test();
    return (0);
}

void test(void){
    int m;
    int &n = m ;

    int *p = (int *)malloc(sizeof(int));
    if(p == NULL){
        puts("error in allocatin the memory");
        exit(-1);
    }

    int &ref = *p ;

    printf("addr in p = %p \n",p);
    printf("addr of ref = %p \n",&ref);

    printf("addr in p = %p\n", p); 
    printf("addr of ref = %p\n", &ref); 

    *p = 500; 
    printf("ref = %d\n", ref); 

    *p = 600; 
    printf("ref = %d\n", ref); 

    // free(p); 
    free(&ref); 

}