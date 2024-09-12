#include<iostream>

class dim{
    friend class ladder;
    private :
       int wd;
       int ht;
    public :
        dim(
            int _wd,
            int _ht
        ): wd(_wd),ht(_ht){

        }
};

class ladder{
   
   private :
      char *material;
      char *brand;
      dim *pd_dim;
      char *color;
      char *special_feature;
      double item_wt;
      double load_capacity;
      char *manufacture;
      char * item_model_number;
      char *asin;
    public:
      ladder(
        char *_material,
        char *_brand,
        int _wd,
        int _ht,
        char *_color,
        char *_special_feature,
        double _item_wt,
        double _load_capacity,
        char* _manufacture,
        char *_item_model_number,
        char *_asin
      ) : material(_material),
      brand(_brand),
      color(_color),
      special_feature(_special_feature),
      item_wt(_item_wt),
      load_capacity(_load_capacity),
      manufacture(_manufacture),
      item_model_number(_item_model_number),
      asin(_asin){
        pd_dim = new dim(_wd,_ht);
      }
    void show();
};

int main(void){
    ladder l("Aluminium",
    "BonKaso",
    56,
    32,
    "SILVER/BLUE",
    "Rust Free, Metallic Hinges, Scratch Resistant",
    5200,
    150,
    "Tempting Home Pvt Ltd, Tempting Home Pvt Ltd, k 454 ,Site V , Upsidc industrial area , kasna , greater noida u.p -201306",
    "BFSL - 6 STEP",
    "B0C61WKVX9");
    l.show();
}

void ladder::show(){
    puts("details are :");

    std::cout << "material : " << material <<std ::endl;
    std::cout <<"brand : " <<brand<<std ::endl;
    std::cout <<"color : "<< color <<std ::endl;
    std::cout << "special feature :" <<special_feature <<std ::endl;
    std::cout <<"item wt : "<< item_wt <<std ::endl;
    std::cout << "load capacity : " << load_capacity<<std ::endl;
    std::cout <<"manufacure "<< manufacture <<std ::endl;
    std::cout <<"item model number : "<< item_model_number <<std ::endl;
    std::cout << "asin : "<< asin<<std ::endl;
    std::cout <<"dim are "<< pd_dim->wd <<" * "<< pd_dim->ht<<std ::endl;
}