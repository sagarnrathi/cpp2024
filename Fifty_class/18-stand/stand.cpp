#include<iostream>

struct dim{
    double ht;
    double wd;
    double ln;
    double wt;
} ;


class stand{
    private :
       struct dim pdim; 
       char * date_of_first_available;
       char *manufacture;
       char *asin;
       char *item_model_number;
       char *country_of_origin;
       char *packer;
       char *importer;
       int net_quantity;
       char *included_component;
       char *generic_name;
    public :
       stand(
        double ht,
        double wd,
        double ln,
        double wt,
        char *_date_of_first_available,
        char *_manufacture,
        char *_asin,
        char *_item_model_number,
        char *_country_of_origin,
        char *_packer,
        int _net_quantity,
        char *_included_component,
        char *_generic_name
       )     :
       date_of_first_available(_date_of_first_available),
       manufacture(_manufacture),
       asin(_asin),
       item_model_number(_item_model_number),
       country_of_origin(_country_of_origin),
       packer(_packer),
       net_quantity(_net_quantity),
       included_component(_included_component),
       generic_name(_generic_name){
        pdim.ht = ht;
        pdim.wd = wd;
        pdim.ln = ln;
        pdim.wt = wt;
       }

      void show();
};

int main(void){

    stand s(
        7.5,
        7.5,
        91.5,
        1.8,
        "11 September 2023",
        "Shenzhen Xtw Electronic Co., Ltd.",
        "B0CCHYNGWR",
        "AB-TP-09",
        "China",
        "SANJAY JAIN AND SONS,2530, LANDCRAFT GOLFLINKS, GHAZIABAD, UTTAR PRADESH- 201001, INDIA",
        1,
        "1N 9ft Tripod, 1N Aluminium Cross Bar, 1 Carry Bag",
        "tripod"
    );

   s.show();
   return 0;
}

void stand::show(){
std :: cout <<"first availne date is : " << date_of_first_available << std :: endl;

std :: cout << "manufacture is : "<< manufacture<< std :: endl;
std :: cout <<"ASIN : "<< asin << std :: endl;
std :: cout <<"item model number : "<< item_model_number << std :: endl;
std :: cout <<"country of origin : "<< country_of_origin << std :: endl;
std :: cout << "packer :"<< packer<< std :: endl;
std :: cout << "net quantity : "<< net_quantity<< std :: endl;
std :: cout <<"included component : "<< included_component << std :: endl;
std :: cout <<"generic name "<< generic_name << std :: endl;
}