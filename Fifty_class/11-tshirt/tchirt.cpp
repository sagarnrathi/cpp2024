#include<iostream>
class tshirt{
   private :
   
     char *package_dimension;
     char *manufacture;
     char *ASIN;
     char *item_model_number;
     char *country_of_origin;
     char *department;
     int item_wt;
     int net_q;
     char *generic_name;

   public :
     tshirt(
     char *_package_dimension,
     char *_manufacture,
     char *_ASIN,
     char *_item_model_number,
     char *_country_of_origin,
     char *_department,
     int _item_wt,
     int _net_q,
     char *_generic_name
     ): package_dimension(_package_dimension),
     manufacture(_manufacture),
     ASIN(_ASIN),
     item_model_number(_item_model_number),
     country_of_origin(_country_of_origin),
     department(_department),
     item_wt(_item_wt),
     net_q(_net_q),
     generic_name(_generic_name)
     {};
    void show();

};

int main(){
    tshirt t("27.5 x 26.3 x 4.4 cm",
    "Amazon Brand- Symbol",
    "B081VLQVR4",
    "SS20SYMTEE34-A",
    "India",
    "Men",
    250,
    2,
    "Cotton T Shirt | Round Neck | Half Sleeve | Plain | Combo Pack of 2 - Regular Fit (Available in Plus Size)"
    );

    t.show();
}

void tshirt:: show(){

   puts("details are ");
   std::cout <<"package dim are : "<<  package_dimension<<std::endl;
   std::cout <<"manufacture is : "<< manufacture <<std::endl;
   std::cout << "asin :" <<ASIN<<std::endl;
   std::cout <<"item model num :"<< item_model_number <<std::endl;
   std::cout <<"country of origin : "<<country_of_origin <<std::endl;
   std::cout <<"department : "<< department <<std::endl;
   std::cout <<"item wt "<< item_wt <<std::endl;
   std::cout << "net quntity "<< net_q<<std::endl;
   std::cout << "beneric  name : "<< generic_name<<std::endl;
}