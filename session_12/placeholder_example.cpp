#include<cstdio>
#include<cstdlib>
class c{
    private:
      int i_num;
      double d_num;
      c(int _n,int _d):i_num(_n),d_num(_d){}
    
    public:
       static c *get_instance(){
        puts("int get instance");
        return new c(0,0.0);
       }

};

void test_function(void);
int main(void){
    test_function();
    return 0;
}

void test_function(){
    c *pc = c::get_instance();
    delete pc;
    pc = 0;
}