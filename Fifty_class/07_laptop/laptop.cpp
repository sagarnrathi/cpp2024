#include<iostream>

class resolution{
    friend class laptop;
    private : 
         int vpixel;
         int hpixel;
    
    public:
        resolution(int _vpixel,int _hpixel):vpixel(_vpixel),hpixel(_hpixel){

        }

     
};

struct package_dim{
    double height;
    double length;
    double breadth;

};
class laptop{
    private :
    char *brand;
    char *manufacture;
    char *series;
    char *color;
    char * form_factor;
    int standing_display_size;
    resolution *pres;
    struct package_dim *ppdim;
    
    public :
       laptop(char *_brand,char *_manufacture,char *_series,char *_color,char *_form_factor,
       int  _standing_display_size,int _vpixel,int _hpixel,int _height,int _length,int _breadth) :
       brand(_brand),manufacture(_manufacture),series(_series),color(_color),form_factor(_form_factor),
       standing_display_size(_standing_display_size)
       {
           pres = new resolution(_vpixel,_hpixel);
           ppdim = (struct package_dim *) malloc(sizeof(struct package_dim));
           ppdim ->height = _height ;
           ppdim -> breadth = _breadth;
           ppdim -> length = _length;
       }
       ~laptop()
       {
        delete ppdim;
        delete pres;
       }
     void show();
    
};

int main(void){
    laptop l("Honor","HONOR, Nanchang Huaqin Electronic Technology Co., Ltd. No. 2999, Tianxiang Avenue, High-Tech Development Zone, Nanchang City, Jiangxi Province, P.R. China - 330096",
    "BRN", "Space Gray","Laptop",16,1900,2200,51,32,6);
    l.show();
}

void laptop :: show(){
    puts("details are ");
    std::cout << "brand is " << brand<<std::endl;
    
    std::cout <<"manufature is " << manufacture<<std::endl;
    
    std::cout <<"series"<< series <<std::endl;
    std::cout << "color"<< color<<std::endl;
    std::cout <<"form factor" << form_factor <<std::endl;
    std::cout <<"standing display size"<< standing_display_size <<std::endl;
    std::cout << "resolution is "<< pres -> vpixel << " * "<< pres -> hpixel<<std::endl;
    std::cout << "dimesntion are " << ppdim -> height <<" * "<< ppdim -> breadth << " * " << ppdim -> length <<std::endl;
 

}