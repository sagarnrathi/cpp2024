#include<iostream>
#include<vector>


void test_iterator(void);

int main(void){
    test_iterator();
    return 0;
}

void test_iterator(void){
    std :: vector<int> ivec {10,20,30,40,50};

    std :: cout <<"forward read/writer " << std :: endl;

    for(
        std :: vector<int> :: iterator iter = ivec.begin();
        iter != ivec.end();
        ++iter
    ){
        std::cout << "*iter = " << *iter << std :: endl;
        *iter = *iter + 5;
     }

     std :: cout <<"forward read/write const " << std :: endl;
    for(
        std::vector<int>::const_iterator iter = ivec.cbegin(); 
        iter != ivec.cend(); 
        ++iter
    ){
        //*iter = *iter + 5; // CTE 
        std::cout << "*iter = " << *iter << std::endl; 
    }

     std :: cout << "reverse r/w " << std :: endl;
     for(
        std :: vector<int> :: reverse_iterator iter = ivec.rbegin();
        iter != ivec.rend();
        ++iter
     )
     {
        std :: cout << "*iter = " << *iter << std :: endl;
        *iter = *iter - 5;
     }

     std :: cout << "reverse const r/w"  << std :: endl;

     for(
        std :: vector<int> :: const_reverse_iterator iter = ivec.rbegin();
        iter != ivec.rend();
        ++iter
     )
     std :: cout << "*iter = " << *iter << std :: endl;

}