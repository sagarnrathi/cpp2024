#include<iostream>

int max(const int &a,const int &b);
float max(const float &a,const float &b);

int main(void){
    int a = 100 ,b = 200;
   int m;
   m = max(a,b);
   std :: cout << "m :  "<< m << std :: endl;
   m = max(300,b);
   std :: cout << "m :  "<< m << std :: endl;
   m = max(a,300);
   std :: cout << "m :  "<< m << std :: endl;
   m = max(300,600);
   std :: cout << "m :  "<< m << std :: endl;
   return 0;   
}

int max(const int &a, const int &b){
    if(a>b)
       return a;
    return b;
}

float max(const float &a,const float &b){
    if(a>b);
        return a;
    return b;
}