#include "vector.hpp"
#include<cstdio>

int main(void){
    
    vector *p_vector = new vector ;
    int status;
    int data;

    p_vector ->push_back(100);
    p_vector ->show("after push back 100");

    p_vector -> push_back(200);
    p_vector -> show("after 200");
    
    status = p_vector ->get(p_vector -> size(),&data);
    if(status == VECTOR_INDEX_ERROR)
       puts("index bound is overridden");
    
    status = p_vector -> get(p_vector ->size()-1,&data);
    if(status == SUCCESS)
       printf("last element : %d \n ",data);
    
    p_vector -> set(p_vector-> size()-1,1010);
    status = p_vector -> get(p_vector-> size() -1 ,&data);

    if(status == SUCCESS)
        printf("last element is %d ",data);

    delete p_vector;
    p_vector = 0;

    return(0);

}