#include<iostream>
#include<cstdlib>
#include<cassert>
#include "stack.hpp"

int main(void){
    stack<5> int5;
    stack<7> int7;
    ssize_t N = 5;
    int data;

    for(ssize_t i = 0;i < N;++i)
       assert(int5.push(i*100) == SUCCESS);
    std::cout <<"int5 stack is full now"<< std::endl;

    assert(int5.top(&data) == SUCCESS);
    std :: cout << "last pushed data"<< data << std ::endl;

    while(!int5.empty()){
        assert(int5.pop(&data) == SUCCESS);
        std:: cout << "popped data:"<< data<< std::endl;
    }

    assert(int5.top(&data)== STACK_EMPTY);

    std :: cout <<"coulld not top from empty stack"<< std::endl;
    std:: cout << "stack : all ok " << std:: endl;

    return EXIT_SUCCESS;
}