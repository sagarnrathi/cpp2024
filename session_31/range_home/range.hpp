#include<iostream>
#include<cstdlib>
#ifndef _RANGE
#define _RANGE
class range{
   
   private :
       int n_start;
       int n_end;
   public :
       class iterator;
       
       range(int _start,int _end);

       iterator begin() const ;

       iterator end() const;

       class iterator{
            private :
               int curr_n;
            public:
                iterator(int n) ;

                int &operator*();
                iterator operator++();
                iterator operator++(int);
                iterator operator--(int);

                iterator operator--();
                bool operator==(const iterator &rhs);               
                

                bool operator !=(const iterator &rhs);
       };

};

#endif 