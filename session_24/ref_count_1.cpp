#include<iostream>

class HasPtr{
     
     private  :
         int n;
         int *ptr;
         int ref_count;
    public :
       HasPtr(int _n,int _val) : n(_n),ptr(new int(_val)),ref_count(1){

       }

       HasPtr(HasPtr& other) : n(other.n),ptr(other.ptr){
        other.ref_count +=1;
        ref_count = other.ref_count;
       }

       void show_ref_count(const char *msg) const{
        std :: cout << msg <<std::endl;
        std::cout <<"ref cnt : "<< ref_count << std::endl;
       }

       ~HasPtr(){
        std::cout << "In dtor : ref cont :" << ref_count << std::endl;
        ref_count -=1;
        if(ref_count == 0)
        delete ptr;
       }
};

int main(void){

   HasPtr *p1 = new HasPtr(10,20);
   HasPtr *p2 = new HasPtr(*p1);
   HasPtr *p3 = new HasPtr(*p1);

   p1 -> show_ref_count("creating  p1 ");
   p2 -> show_ref_count("creating p2 ");
   p3 -> show_ref_count("creating p3 ");

   delete p1;

   p2 -> show_ref_count("after p1 : p2");
   p3 -> show_ref_count(" p3");

   return(0);

}