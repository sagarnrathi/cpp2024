#include<iostream>

class HasPtr{
    private :
        int n;
        int *ptr;
        static int ref_count;
    
    public:
        HasPtr(int _n, int _val): n(_n),ptr(new int(_val)){
          ref_count+=1;
        }

        HasPtr(HasPtr &other) : n(other.n),ptr(other.ptr){
            other.ref_count += 1;
            ref_count = other.ref_count;
        }

        void show_ref(const char *msg) const{
            std :: cout  << msg << std :: endl;
            std :: cout << " ref count " << ref_count << std::endl;
        }

        ~HasPtr(){
            std :: cout  << "In Dtor : ref_count : " << ref_count << std::endl;
            ref_count -=1;
            if(ref_count == 0){
                std :: cout <<"Deleting the ptr " << std :: endl;
                delete ptr;
            }
        }
};

int HasPtr :: ref_count = 0;

void test(void);

int main(void){
    HasPtr *p1 = new HasPtr(10,20);
    HasPtr *p2 = new HasPtr(*p1);
    HasPtr *p3 = new HasPtr(*p2);

    p1 -> show_ref("on p1 ");
    p2 -> show_ref(" on p2 ");
    p3 -> show_ref(" on p3 ");

    delete p1 ;
    p2 -> show_ref(" on p2");
    p3 -> show_ref(" on p3 ");

    delete p2 ;
    p3 -> show_ref("on p3");
    delete p3;

    test();

    return(0);
}
void test(void){

    HasPtr hp1(10,20);
    HasPtr hp2(hp1);
    HasPtr hp3(hp2);

    HasPtr hp4(100,300);
    HasPtr hp5(hp4);

    hp1.show_ref(" on hp1 :");
    hp2.show_ref("on hp2 :");
    hp3.show_ref(" on hp3 :");
    hp4.show_ref(" on hp4 ");
    hp5.show_ref("on hp5 ");

}