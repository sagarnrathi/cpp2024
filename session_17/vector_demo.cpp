#include<vector>
#include<iostream>

void test_vector(void);
void test_vector_initialization(void);

int main(void){
     test_vector();
     test_vector_initialization();
    return 0;
}
void test_vector(void){
    std :: vector<int> ivec;
    std :: vector<float> fvec;

    ivec.push_back(10);
    ivec.push_back(20);
    ivec.push_back(30);

    fvec.push_back(1.1);
    fvec.push_back(2.2);
    fvec.push_back(3.3);
    
    std::cout << "showing ivec : " << std::endl ;
    for(
        std :: vector<int> :: size_type i = 0;
        i != ivec.size();
        ++i
    )
    std::cout << "ivec [" << i << "] :"<<ivec[i] << std::endl;

    std::cout << "showing fvec : " << std::endl;
    for(
        std :: vector<float> :: size_type i = 0 ;
        i != fvec.size();
        ++i
    )
    std::cout << "fvec [" << i << "]" << fvec[i] << std::endl;

    for(
        std :: vector<int> :: size_type i = 0;
        i != ivec.size();
        ++i
    )
    ivec[i ] = (i + 1) * 100;

    std :: cout << "showing modifies ivec : " << std::endl;
    for(
        std::vector<int> :: size_type i = 0;
        i!= ivec.size();
        ++i
    )
    std::cout << "ivec [" << i <<"]:" <<ivec[i] <<std::endl;

}

void test_vector_initialization(void){
   std:: vector<int> ivec1;
   std:: vector<int> ivec2(5);
   std:: vector<int> ivec3(5,100);

   std :: vector<int> ivec4(ivec2);
   std::vector<int> ivec5{100,200,300,400,500};
}