#include<iostream>
#include<cstdlib>

struct IntPtr{
    int *p;
    int ref_count;
};

class HasPtr{
    private :
        int n;
        struct IntPtr *pIntPtr;
    
    public :
        HasPtr(int _n,int _val):n(_n){
            pIntPtr = (struct IntPtr *) malloc(sizeof(struct IntPtr));
            if(pIntPtr == 0){
                std :: cout  << " allocation error : struct intptr" << std::endl;
                exit(EXIT_FAILURE);
            }
            pIntPtr -> p = (int*) malloc(sizeof(int));
            if(pIntPtr -> p == 0){
                std:: cout << "allocation : int" << std::endl;
                exit(EXIT_FAILURE);
            }
            pIntPtr -> ref_count = 1;
            *pIntPtr -> p = _val ;
        }
        HasPtr(const HasPtr &other) : n(other.n),pIntPtr(other.pIntPtr){
            pIntPtr->ref_count+=1;
        }

        HasPtr &operator=(const HasPtr &other){
            if(this != &other){
                this -> pIntPtr -> ref_count -=1;
                if(this -> pIntPtr -> ref_count == 0){
                    free(this -> pIntPtr -> p);
                    free(this -> pIntPtr);
                }
                this -> n = other.n ;
                this -> pIntPtr = other.pIntPtr;
                this ->pIntPtr -> ref_count +=1;
            }
        }

        void show_ref(const char * msg)const{
               
               std::cout <<msg  << std :: endl;
               std ::cout << pIntPtr -> ref_count << std::endl;

        }
};

void test(void);

int main(void){
    test();
    return EXIT_SUCCESS;
}

void test(void){

    HasPtr hp1(10,20);
    HasPtr hp2(hp1);
    HasPtr hp3(hp2);

    HasPtr hp4(hp3);
    HasPtr hp5(hp4);

    hp1.show_ref(" on hp1 :");
    hp2.show_ref("on hp2 :");
    hp3.show_ref(" on hp3 :");
    hp4.show_ref(" on hp4 ");
    hp5.show_ref("on hp5 ");

}

