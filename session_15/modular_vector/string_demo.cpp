#include<iostream>
#include<string>

void test_string(void);

int main(void){
    test_string();
    return 0 ;
}

void test_string(void){
    std::string s1;
    std::string s2("Hello world");
    std::string s3(s2);
    std:: string s4(4,'a');

    std::cout << "s1 :" << s1 << std::endl
              << "s2 : " << s2 << std::endl
              << " s3 :"  << s3 << std::endl
              << " s4 : "<< s4 << std::endl;

    const char *p_str_1 = s1.c_str();
    const char *p_str_2 = s2.c_str();
    const char *p_str_3 = s3.c_str();
    const char *p_str_4 = s4.c_str();

    printf("str1 = %s ,str2 = %s,str3 = %s , str4 = %s ",p_str_1,p_str_2,p_str_3,p_str_4);
}