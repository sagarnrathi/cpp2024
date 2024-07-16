#include<cstdio>

class c1{
   friend class c2;
   private:
        int i_num;
        double d_num;
    public:
        c1():i_num(100),d_num(3.1414){}
};

c1 g_obj;

class c2{
    private:
       int x;
       int y;
       double p,q;
    public:
       c2():x(0),y(0),p(0.0),q(0.0){

       }

       void print_ints(){
        printf("%d %d \n",x,y);
        printf("g_obj:%d,%.3f\n",g_obj.i_num,g_obj.d_num);
       }

       void print_double(){
        printf("%f,%f \n",p,q);
        printf("g_obj : %d ,%f",g_obj.i_num,g_obj.d_num);
       }

       static void some_func(int a,int b){
        printf("my arguemtn : a:%d,b:%d\n",a,b);
        g_obj.d_num = 200.2;
        g_obj.i_num = 3;
       }
};