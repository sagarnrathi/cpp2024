#include<cstdio>

void swap(int &a,int&b);

int main(){
    int p = 11;
    int q = 22;
    printf("before swap %d %d \n",p,q);
    swap(p,q) ;
    printf("after swap %d %d \n",p,q);

    return(0);
}

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}