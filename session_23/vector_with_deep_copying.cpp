#include<iostream>
#include<stdexcept>
#include<cstring>

class vector {
      private :
           int *ptr;
           size_t N;
      public :
          vector() : ptr(0),N(0){

          }
          
          vector(size_t _N) : ptr((int *)malloc(_N *sizeof(int))),N(_N){

          }

          ~vector(){
            free(ptr);
          }

          vector(const vector &other){
            this -> N = other.N ;
            this -> ptr = (int *) malloc(this -> N * sizeof(int));
            memcpy((void*)this-> ptr,(void *)other.ptr,N *sizeof(int));
          }

          vector &operator=(const vector &other){
            if(this != &other){
                free(this -> ptr );
                this -> N = other.N ;
                this -> ptr = (int *) malloc(this -> N * sizeof(int));
                memcpy((void *)this-> ptr,(void *)other.ptr,this -> N *sizeof(int));
            }
            return *this;
          }

          int &operator[](size_t index){
            if(index < 0 || index >= N)
                throw std :: runtime_error("bad index");
            return *(ptr + index);
          }

          void push_back(int val){
              this -> ptr = (int *) realloc(this -> ptr,(this -> N + 1) * sizeof(int));
              this -> N +=1;
              this -> ptr[this -> N - 1 ] = val;
          }

          friend  std :: ostream &operator <<(std::ostream &other,const vector &v);
};

std :: ostream &operator<<(std :: ostream &os,const vector &v){
          for(size_t i = 0; i < v.N;++i)
                os <<"v[" << i << "] :" << v.ptr[i] << std::endl;
          return os;
}

void test(void);

int main(void){
    test();
    return EXIT_SUCCESS ;
}

void test(void){
    vector v1(5);

    for(size_t i = 0;i != 5;i++)
         v1[i] = (i + 1) * 100 ;
    std :: cout << v1;

    vector v2(v1);
    std :: cout  << "copy constructed v2 :" << std:: endl << v2;

    vector v3(10);
    for(size_t i = 0 ; i != 10 ; i++)
        v3[i] = (i + 1) * 1000;
    
    std :: cout << "v3 " << std :: endl;
    v2 = v3;

    std :: cout << "v2" << std :: endl << v2;
    v2[5] = 40;
    std :: cout << "v2 after modification : " << std:: endl << v2;
    std :: cout << "v3 after modification : " << std :: endl << v3;
}