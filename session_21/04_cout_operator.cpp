#include<iostream>
#include<cstdlib>

typedef long long int ssize_t;

const int SUCCESS = 1;
const int INDEX_ERR = 2;
class array{
    private :
        int *pa;
        ssize_t N;
    public :
        array(ssize_t _N) : pa(new int[_N]), N(_N){
        }
        int &operator[] (ssize_t index){
            return this -> pa[index];
        }
        ~array(){
            delete []pa;
        }
};

int main(void){
    const ssize_t N = 10; 
    ssize_t i; 
    array A(N); 


    std :: cout  << "A[i] = val ; std :: cout  <<a[i] " << std::endl;
      for(ssize_t i = 0; i < N; ++i)
        A[i] = (i+1) * 1000; 
    for(ssize_t i = 0;i < N ;++i){
        std::cout << "value at index "
                 <<i <<":"
                 << A[i]
                 << std ::endl;
    }
}