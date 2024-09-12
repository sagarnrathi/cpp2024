#include<iostream>
#include<cstdlib>
#include "range.hpp"

       
range::  range(int _start,int _end):n_start(_start),n_end(_end){
        if(n_start >= n_end){
            std :: cout << "start must less than n"<<std::endl;
            exit(EXIT_FAILURE);
           }
       }


range :: iterator range :: begin () const {
    iterator iter(n_start);
    return iter;
    }

range :: iterator range :: end () const {
    iterator iter(n_end);
    return iter;
    }

range :: iterator :: iterator(int n) : curr_n(n){
    
}

int& range::iterator:: operator*(){
   return curr_n;
   }

range :: iterator range:: iterator:: operator++()
{
    curr_n +=1;
    return *this;
}

range :: iterator range:: iterator:: operator++(int)
{ 
    iterator temp(curr_n);
    curr_n +=1;
    return temp;
}

bool  range:: iterator::operator !=(const iterator &rhs){
       return ( curr_n != rhs.curr_n);
}

                


