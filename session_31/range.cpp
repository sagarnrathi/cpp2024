#include<iostream>
#include<cstdlib>

class range{
   
   private :
       int n_start;
       int n_end;
   public :
       class iterator;
       
       range(int _start,int _end):n_start(_start),n_end(_end){
        if(n_start >= n_end){
            std :: cout << "start must less than n"<<std::endl;
            exit(EXIT_FAILURE);
           }
       }

       iterator begin() const {
        iterator iter(n_start);
        return iter;
       }

       iterator end() const{
        iterator iter(n_end);
        return iter;
       }

       class iterator{
            private :
               int curr_n;
            public:
                iterator(int n) : curr_n(n){

                }

                int &operator*(){
                    
                    return curr_n;
                }
                iterator operator++(){
                    curr_n +=1;
                    return *this;
                }
                iterator operator++(int){
                     iterator temp(curr_n);
                     curr_n +=1;
                    return temp;
                }
                iterator operator--(int){
                    iterator temp(curr_n);
                    curr_n -=1;
                    return temp;
                }

                iterator operator--(){

                    curr_n-=1;
                    return *this;

                }

                bool operator==(const iterator &rhs){
                    return curr_n == rhs.curr_n;
                }

                bool operator !=(const iterator &rhs){
                    return curr_n !=  rhs.curr_n;
                }
       };

};

int main(void){

    range r(10,30);

    range :: iterator iter = r.begin();
    
    std :: cout << "*iter" << *iter << std::endl;

    while(iter != r.end()){
        std :: cout <<"*iter " << *iter << std :: endl;
        ++iter;
    }

    std :: cout <<"using for loop " << std :: endl;

    for(
        range:: iterator iter = r.begin();
        iter != r.end();
        ++iter
    )
    std :: cout <<"*iter " << *iter << std::endl;

    return 0;
}