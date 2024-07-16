#include<iostream>
#include<cstdlib>

typedef long long  int ssize_t;

const int SUCCESS   = 1;
const int INDEX_ERR = 2;

class array{
    private :
       int *pa;
       ssize_t N;
    public :
       array(ssize_t _N) : pa(new int[_N]),N(_N){

       }

       int set(ssize_t index, int data){
          if(index < 0 || index >=N)
             return INDEX_ERR;
        this -> pa[index] = data;
        return SUCCESS;

       }

       int get(ssize_t index ,int *p_data){
        if(index < 0 || index >= N)
             return INDEX_ERR ;
        *p_data = pa[index];
        return SUCCESS; 
       }
       ~array(){
        delete []pa;
       }
};


void test_2(void);

int main(void){

    test_2();
    return EXIT_SUCCESS ;
}

void test_2(void){
    const ssize_t N = 10;
    int status;
    array a(N);

    for(ssize_t i = 0;i < N ; i++){
        status = a.set(i,(i+1) * 10 );

        if (status == INDEX_ERR){
            std :: cout  << "index " << i <<": out of range" << std::endl;
        }
    }
    for(ssize_t i = 0 ; i < N ; i++){
        int data ;
        status = a.get(i,&data);
        if(status == INDEX_ERR){
            std :: cout << "index " << i <<"out of range " << std::endl;

        }
        else {
            std :: cout << "value at index : " << i <<"is :" << data << std::endl;
        }

    }

}
