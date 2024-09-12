#include<iostream>
class dim{
    friend class camera;
    private :
       int breadth,height,length;
    public :
       dim(int b, int h,int l): breadth(b),height(h),length(l){

       }

};
class camera{
      private: 
       char *brand;
       char *manufacture;
       char *model;
       dim *pd;
       char *item_model_number;
       char *flash_mem_type;
       int resolution;
       char* connector_type;
    public:
        camera(  char *_brand,
       char *_manufacture,
       char *_model,
       int ht,
       int ln,
       int bd,
       char *_item_model_number,
       char *_flash_mem_type,
       int _resolution,
       char* _connector_type) :
       brand(_brand),
       manufacture(_manufacture),
       model(_model),
       item_model_number(_item_model_number),
       flash_mem_type(_flash_mem_type),
       resolution(_resolution),
       connector_type(_connector_type){
        pd = new dim(bd,ht,ln);
       }
      void show();
       
};

int main(void){
    camera c(
        "HINISO",
        "HINISO, Hiniso China",
        "AT-S81TR",
        26,
        17,
        19,
        "AT-S81TR",
        "SD",
        1080,
        "Wi-Fi, HDMI"
    );
     c.show();
}

void camera::show(){
    puts("details are :");
    std::cout << "brand :"<< brand<< std::endl;
    std::cout <<"manufacture "<< manufacture << std::endl;
    std::cout <<"model "<<model << std::endl;
    std::cout <<"item model number "<< item_model_number << std::endl;
    std::cout <<"flash meme tyoe "<< flash_mem_type << std::endl;
    std::cout <<"resolution "<< resolution << std::endl;
    std::cout << "connector type "<< connector_type<< std::endl;
    std::cout <<"dimension are "<< pd->breadth<<" * " << pd -> height<<" * " << pd -> length<< std::endl;

}