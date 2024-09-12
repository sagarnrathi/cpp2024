
#include<iostream>

struct dim{
    int length;
    int height;
    int bridth;
    public :
        dim(int len,int ht,int wd):
           length(len),height(ht),bridth(wd){

           }
};

class facewash{
    private :
       char * IsDiscontinuedByManufacturer ;
       int height  ;
       int width;
       int length;  
       double weight ;
       char *DateFirstAvailable ;
       char *Manufacturer;
       char *ASIN;
       double ItemModelNumber ;
       char * country_of_origin;
       char * netQuantity;
       char *includedComponent;
       struct dim *pdim;
    public :
         facewash(char *_IsDiscontinuedByManufacturer, int height,int length,int bridth,double _weight,
         char *_DateFirstAvailable,char *_Manufacturer,char *_ASIN,double _ItemModelNumber,char *_country_of_origin,
         char * _netQuantity,char * _includedComponent) :
         IsDiscontinuedByManufacturer(_IsDiscontinuedByManufacturer),weight(_weight),
         DateFirstAvailable(_DateFirstAvailable),Manufacturer(_Manufacturer),ASIN(_ASIN)
         ,ItemModelNumber(_ItemModelNumber),country_of_origin(_country_of_origin),netQuantity(_netQuantity),
          includedComponent(_includedComponent)
         {
            pdim = (struct dim *) malloc(sizeof(struct dim));
            pdim -> height = height ;
            pdim -> length = length ;
            pdim -> bridth = bridth ;
         }     
    void show();
};

int main(void){
    facewash fw("No",10,20,30,400,"6 August 2012"," AERO PHARMA",
    "B000LQUA6M",5011451307643,"India","500ltr","Refreshing Face Wash");
    fw.show();
}

void facewash:: show(){
    puts ("info is");

    std::cout << "continue by manufacture " << IsDiscontinuedByManufacturer << std :: endl;
    std::cout << " manufacture " << Manufacturer << std :: endl;
    std::cout << "ASINA " << ASIN << std :: endl;
    std::cout << "_DateFirstAvailable by manufacture " << DateFirstAvailable << std :: endl;
    std::cout << "ItemModelNumber  " << ItemModelNumber << std :: endl;
    std::cout << "_country_of_origin  " << country_of_origin << std :: endl;
    std::cout << "_netQuantity  " << netQuantity << std :: endl;
    std::cout << "includedComponent" << includedComponent << std :: endl;
    std :: cout << "dimension are " << pdim -> height << " * " << pdim -> bridth << " * " << pdim ->length << std :: endl;
}