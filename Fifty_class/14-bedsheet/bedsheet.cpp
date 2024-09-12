#include<iostream>

class dim{
    friend class bedsheet;
    private :
       double l;
       double w;
    public :
        dim(double _l,double _w):l(_l),w(_w){}
};

class bedsheet{
  private:
    char *size;
    char *material;
    char *color;
    char *pattern;
    char *brand;
    char *special_feature ;
    char *included_component;
    int thread_count;
    char *age_range;
    char *occasion;
    char *product_care_inst;
    dim *d;
   
   public :
      bedsheet(
        char *_size,
        char *_material,
        char *_color,
        char *_pattern,
        char *_brand,
        char *_special_feature,
        char *_included_component,
        int _thread_count,
        char *_age_range,
        char *_occasion,
        char *_product_care_inst,
        double l,
        double w
      ):
      size(_size),
      material(_material),
      color(_color),
      pattern(_pattern),
      brand(_brand),
      special_feature(_special_feature),
      included_component(_included_component),
      thread_count(_thread_count),
      age_range(_age_range),
      occasion(_occasion),
      product_care_inst(_product_care_inst)
      {
        d = new dim(l,w);
      }
      void show();
};

int main(void){
    bedsheet b(
        "King",
        "Cotton",
        "Blue 1",
        "Cotton King Size Bedsheet with 2 Pillow Covers",
        "Amazon Brand - Solimo",
        "Lightweight, Wrinkle Resistant, Breathable",
        "Bed Sheet",
        144,
        "Adult",
        "Housewarming",
        "Machine Wash",
        2.28,
        1.39
    );
    b.show();
}

void bedsheet::show(){
    puts("details are ");
    std :: cout <<"size is : " << size << std::endl;
    
    std :: cout << "material is : " << material<< std::endl;
    std :: cout << "color is : "<< color << std::endl;
    std :: cout <<"pattern : "<< pattern << std::endl;
    std :: cout <<"brand : "<< brand << std::endl;
    std :: cout <<"special feature : "<< special_feature << std::endl;
    
    std :: cout << "included component "<< included_component<< std::endl;
    std :: cout <<"thread cout : "<< thread_count << std::endl;
    std :: cout <<"age range"<< age_range << std::endl;
    std :: cout <<"occasion : "<< occasion << std::endl;
    std :: cout << "wash instruction : " << product_care_inst << std::endl;
    std :: cout << "dimensions are " << d->l << " * "<< d->w<< std::endl;
}