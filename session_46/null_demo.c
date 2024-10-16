#include<stdio.h>

int main(void){
    int *ptr = NULL;
    
    ptr = (int *) malloc(sizeof(int));
    assert(ptr != NULL);

    free(ptr);
    ptr = NULL;

    return(0);
    
}