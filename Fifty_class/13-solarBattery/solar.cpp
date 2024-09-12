#include<iostream>
#include<cstdlib>
class dim{
    friend class solar;
    private :
    double ht;
    double ln;
    double bd;
    public :
        dim(double _ht,double _ln,double _bd):ln(_ln),bd(_bd),ht(_ht){}

};
class solar{
    
    private :

    char *brand;
    char *color ;
    char *material;
    char *room_type;
    char *i_o_usage;
    char *power_source;
    char *installation_type;
    char *special_feature;
    dim *pdim;
    
    public:
       solar(
        char *_brand,
        char *_color,
        char *_material,
        char *_room_type,
        char *_i_o_usage,
        char *_power_source,
        char *_installation_type,
        char *_special_feature ,
        double ht,
        double ln,
        double bd
       ) : brand(_brand),
       color(_color),
       material(_material),
       room_type(_room_type),
       i_o_usage(_i_o_usage),
       power_source(_power_source),
       installation_type(_installation_type),
       special_feature(_special_feature){
        pdim =  new dim(ht,ln,bd);
       }

   void show();
};

void main(void){
    solar s(
        "XERGY",
        "Pack of 2",
        "Acrylonitrile Butadiene Styrene, Polycarbonate",
        "Garden, Balcony, Outdoor",
        "Outdoor",
        "Solar Powered, Battery Powered",
        "Flush Mount",
        "Waterproof",
        33.6,
        17.2,
        13.4
    );

    s.show();
}

void solar :: show(){

    std :: cout <<  "brand : " << brand<<std::endl;
    std :: cout << "color :" << color<<std::endl;
    std :: cout << "material : "<< material <<std::endl;
    std :: cout <<  "room type : "<< room_type<<std::endl;
    std :: cout << "io usage : " << i_o_usage <<std::endl;
    std :: cout <<  "power_source " << power_source<<std::endl;
    std :: cout <<"installation : " << installation_type  <<std::endl;
    std :: cout <<"specail feature : "<< special_feature  <<std::endl;
    std :: cout << "dimenstion are : "<< pdim->ht<<" * "<< pdim ->bd <<" * "<< pdim->ln <<std::endl;

}