#include<stdio.h>
#include<stdlib.h>
#include "list.h"
#include<assert.h>

int main(void){

    list_t *lst = NULL;
    status_t status;
    data_t data;

    lst = create_list();
    assert(get_start(lst, &data) == LIST_EMPTY); 
    assert(get_end(lst, &data) == LIST_EMPTY); 
    assert(pop_start(lst, &data) == LIST_EMPTY); 
    assert(pop_end(lst, &data) == LIST_EMPTY); 
  
}