#include "list.hpp"
#include <cstring>

int main(void){
    cpa :: dsa :: list<int> lst;
    for(
        int data = 0 ;
        data < 5;
        data++
    )
    lst.insert_end((data+1) * 100);
    std :: cout << " after insert start() :" << std :: endl << lst;

    cpa :: dsa :: list<char> clist;
    const char *name = "core code program";
    for( std :: size_t i = 0;
        i < strlen(name);
        ++i
    )
    clist.insert_end(name[i]);
    std :: cout << clist;

    std :: cout << "iterator om int :" << std :: endl;
    for(
        cpa::dsa::list<int> :: iterator iter = lst.begin();
        iter != lst.end();
        ++iter
    )
    std :: cout <<"*iter = " << *iter << std :: endl;
        std::cout << "iterator on char:" << std::endl; 
    for(
        cpa::dsa::list<char>::iterator iter = clist.begin(); 
        iter != clist.end(); 
        ++iter
    ) 
        std::cout << "*iter=" << *iter << std::endl; 

        return 0;
}