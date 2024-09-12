#include "list.hpp"

int main(void){
    list *plist = new list;
    plist -> insert_start(100);
    std :: cout << *plist;

    plist -> insert_end(200);

    std :: cout  << *plist;

    plist -> insert_after(100,300);

    std :: cout << *plist;

    delete plist;
    plist=0;    
    return 0;
}