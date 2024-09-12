#include<iostream>

class dim{
    friend class tv;
    private :
       double ln;
       double bd;
       double ht;
       double wt;
    public:
       dim(double _ln,
       double _bd,
       double _ht,
       double _wt): ln(_ln),bd(_bd),ht(_ht),wt(_wt){

       }
} ;

class resolution{
    friend class tv;
    private :
       double ln;
       double bd;
    public :
       resolution(double _ln,double _bd):
                  ln(_ln),bd(_bd){}

};
class tv{

    char *brand;
    char *manufactur;
    char *model;
    dim *pdim;
    resolution *pscreen;
    char *item_model_number;
    char *memory_storage_capacity;
    char *ram_memory;
    
    public :
       tv(
        char *_brand,
        char *_manufacture,
        char *_model,
        char *_item_model_number,
        char *_memory_storage_capacity,
        char *_ram_memory,
        double dln,
        double dbd,
        double dht,
        double dwt,
        int sln,
        int sbd
       ):
       brand(_brand),
       manufactur(_manufacture),
       model(_model),
       item_model_number(_item_model_number),
       memory_storage_capacity(_memory_storage_capacity),
       ram_memory(_ram_memory){
        pdim = new dim(dln,dbd,dht,dwt);
        pscreen = new resolution(sln,sbd);
       }


      void show();

};


int main(void){
    tv *ptv = new tv(
        "Samsung",
        "Samsung India Pvt. Ltd",
        "QA65S90DAULXL",
        "QA65S90DAULXL",
        "8Gb",
        "2.5GB",
        3.99,
        144.43,
        83.17,
        21.2,
        3840,
        2160
    );
    
    ptv->show();
}

void tv :: show(){
    puts("show details ");

    std :: cout << "brand : " << brand<<std ::endl;
    std :: cout <<"manufacture : " << manufactur <<std ::endl;
    std :: cout <<"item_model_number : "<< item_model_number <<std ::endl;
    std :: cout <<"model : "<< model <<std ::endl;
    std :: cout <<"memory storage capacity : "<< memory_storage_capacity <<std ::endl;
    std :: cout <<"ram is : "<< ram_memory <<std ::endl;
    std :: cout << "dimnestion are : "<< pdim ->ht << " * " << pdim -> ln << " * "<< pdim ->bd <<std ::endl;
    std :: cout << "wt is : " << pdim -> wt << std :: endl;
    std :: cout << "resultion is : " << pscreen -> bd << " * " << pscreen ->ln << std :: endl;
}