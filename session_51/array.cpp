#include<iostream>
#include<stdexcept>

typedef long long ssize_t;

class array{
   private :
      int *p_arr;
      ssize_t N;
   
   public :
      array(ssize_t _N){
        if(_N <= 0)
           throw std :: length_error("length of array can not be 0 or negative");
        N = _N;
        p_arr = new int[N]; 
      }

      int & operator[](ssize_t i){
        if(i < 0 || i >= N)
            throw std :: out_of_range("index out of range");
        return *(p_arr + i);
      }

      ssize_t size() const{
        return N;
      }

      ~array(){
        if(p_arr)
             delete [] p_arr;
      }

      friend std :: ostream &operator<<(std :: ostream &os, const array &A);
};

std:: ostream & operator<<(std ::ostream &os, const array &A){
    for(ssize_t i = 0; i < A.N;++i)
       std:: cout <<"A["<<i<<"]"<<A.p_arr[i]<<std::endl;
    return os;
}

int main(void){

   array *pa = 0 ;
   try {
     pa = new array(-400);
   }
   catch(const std :: length_error &exc) {
    std :: cout <<exc.what()<< std :: endl;
   }

   pa = new array(8);

   for(ssize_t i = 0;i < pa->size();++i)
       (*pa)[i]= (i + 1) * 100;
    std :: cout <<"showing arrays after setting vals : "<<*pa<<std::endl;
    ssize_t index = 500;
    try {
        std :: cout <<"element at index : "<<index  << " is : "<<(*pa)[index]<<std::endl;
    }
    catch (const std :: out_of_range &exc){
        std :: cout << exc.what()<< std::endl;
    }
    index = 3;
    std :: cout <<"element at index : "<< index<< " is : "<<(*pa)[index]<<std::endl;
    delete pa;
    pa = 0 ;
    return EXIT_SUCCESS;

}