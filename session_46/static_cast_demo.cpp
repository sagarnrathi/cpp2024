#include<iostream>
#include<cstdlib>


void use_case_1(void);
void use_case_2(void);

int main(void){
    use_case_1();
    use_case_2();

    return EXIT_SUCCESS;
}

void use_case_1(void){
    std :: cout << "In case use 1() : "<< std::endl;
    float fnum1 = 3.14f;
    float fnum2 = 4.56f;
    int int_part = (int) fnum1;

    std :: cout <<"int part : " << int_part << std::endl;

    int_part = static_cast<int>(fnum2);

    std :: cout <<"integtal part :" << int_part << std:: endl;
}

void use_case_2(){
    int *ptr = NULL;
    ptr = static_cast<int *>(malloc(sizeof(int)));
    free(static_cast<void *>(ptr));
    ptr = NULL;
}