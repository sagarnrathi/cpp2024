#include<iostream>
#include<stdexcept>

class singleton{
    private :
        int i_num;
        double d_num;
    
    singleton(int _n,int _d):i_num(_n),d_num(_d)
    {

    }


    static int obj_cnt;
    
    public:
        static singleton *get_instance(int _n,int _d){
            puts("i am called");
            ++obj_cnt ;

        if(obj_cnt > 1)
            throw std :: runtime_error("only one object of this class can be created");
        
        return new singleton(_n,_d);
        }
            ~singleton(){
        obj_cnt = 0 ;
        puts("calling destructor");
    }
};

int singleton :: obj_cnt = 0;
void test_singleton(void);

int main(void){
    test_singleton();
    return (0);
}

void test_singleton(void){
    singleton *psingleton_1 = singleton :: get_instance(100,300);

    std::cout <<"first obj created " <<std::endl;
    delete psingleton_1;
    try{
        singleton *psingleton_2 = singleton ::get_instance(12,12);
    }
    catch(std::runtime_error &e){
        std::cout <<e.what()<<std::endl;
    }

     
    psingleton_1 = 0;

}