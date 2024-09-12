#include<iostream>
struct dim{
    double width;
    double height;
};
class bottle {
    private :
        char *brand;
       char *material;       
       char *bottle_type;
       char *color;
       char * capacity;
       char * special_feature;
       char *age_range;
       struct dim *pdim;
       char *product_care_inst;
       char *recommand_use_of_product;
       int number_of_item;
       char *reusability;
       char *shape;
       char *ASIN;
    
    public :
        bottle(char *_brand,char *_material,char *_bottle_type,char *_color, char *_capacity,char * _special_feature,
              char * _age_range,double _width,double _height,char *_product_care_inst,char *_recommand_use_of_product,
              int _number_of_item,char *_reusability,char *_shape,char* _ASIN):
              brand(_brand),material(_material),bottle_type(_bottle_type),color(_color),capacity(_capacity),
              special_feature(_special_feature),age_range(_age_range),product_care_inst(_product_care_inst),
              recommand_use_of_product(_recommand_use_of_product), number_of_item(_number_of_item),
              reusability(_reusability),shape(_shape),ASIN(_ASIN){
                pdim ->height = _height ;
                pdim -> width = _width ;
              }
        void show(){
            puts("bottle details are");
            std::cout <<"brand is " << brand << std:: endl;
            std::cout <<"material is " << material << std:: endl;
            std::cout <<"bottle type  is " << bottle_type << std:: endl;
            std::cout <<"color is " << color << std:: endl;
            std::cout <<"capacity is " << capacity << std:: endl;
            std::cout <<"special feature is " << special_feature << std:: endl;
            std::cout <<"age is " << age_range << std:: endl;
            std::cout <<"pdim is " << pdim->height <<"*" << pdim ->width  << std:: endl;
            std::cout <<"instruction is " << product_care_inst << std:: endl;
            std::cout <<"reommanded use is " << recommand_use_of_product << std:: endl;
            std::cout <<"number of  is " << number_of_item << std:: endl;
            std::cout <<"reusability is " << reusability << std:: endl;
            std::cout <<"shape is " << shape << std:: endl;
            std::cout <<"ASIN is " << ASIN << std:: endl;

        }

};

int main(void){

    bottle* pb = new bottle("Amazon Brand - Solimo","Stainless Steel","Standard Bottle",
       "Stainless","1ltr","leak proof","adult",3,26,"handwash only","home,office",3,"resuable",
       "round","B0929P7NT1");
       pb->show();
    
}