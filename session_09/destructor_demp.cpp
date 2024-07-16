#include<cstdio>

class Test {
   
   private :
        int num ;
        char c;
        float f_num;

    public : 
       Test(){
        
        puts("in Test Test()");
        printf("Test : Test() : this = %llu \n",(unsigned long long) this);
        
       }
       ~Test(){
        puts("In test :: ~Test()");
        printf("Test :: ~Test() : this = %llu \n",(unsigned long long) this);
       }

} ;

int main(void){
    
    Test *pTest = 0 ;
    pTest = new Test ;
    printf("main() : pTest : %llu \n",(unsigned long long)pTest);

    delete pTest;
    pTest = 0;
    return 0;
}