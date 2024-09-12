#include<cstdlib>
#include<iostream>

#include "range.hpp"


int main(void){

    range r(10,30);

    range :: iterator iter = r.begin();


    while(iter != r.end()){
       std :: cout <<"*iter " << *iter << std :: endl;
        iter++;
    }
    std :: cout <<"using for loop " << std :: endl;

    for(
        range:: iterator iter = r.begin();
        iter != r.end();
        iter++
    )
    std :: cout <<"*iter " << *iter << std::endl;

    return 0;

    return 0;
}