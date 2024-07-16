#include<iostream>
#include<vector>

void test_vector(void);

int main(void){
    test_vector();
    return 0 ;
}

void test_vector(void){
    
    std::vector<int> ivec ;
    std:: vector<double> dvec;
    
    ivec.push_back(1);
    ivec.push_back(4);
    ivec.push_back(5);

    dvec.push_back(1.2);
    dvec.push_back(3.4);

    int num1,num2,num3;
    num1 = ivec[0];
    num2 = ivec[1];
    num3 = ivec[2];

    std :: cout  << "num1 "  << num1 <<std::endl
                  <<"num2 "  << num2 << std::endl
                  <<"num3 "   << num3 << std ::endl;
   
   size_t lenght_ivec = ivec.size();
   std::cout <<"lenght(ivec )"<<lenght_ivec <<std::endl;

   for(std::vector<int>::size_type i =0 ;i !=ivec.size();i++)
    std::cout <<"ivec[" <<i<<"] :" <<ivec[i] <<std::endl;

    ivec.pop_back();
    ivec.pop_back();
    ivec.pop_back();

    std::cout << "lenght(ivec) :" <<ivec.size() << std::endl;

}