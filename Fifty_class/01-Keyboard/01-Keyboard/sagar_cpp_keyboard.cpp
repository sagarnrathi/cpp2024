#include<iostream>
class dim{
    friend class Keyboard;
    private :
            float length;
            float width;
            float height;
    public :
    dim(float _lenght,float _width,float _height) : length(_lenght), height(_height), width(_width){
       
    }
};


class Keyboard{

    private :
        char *name;
        int price;
        char  *brand;
        char *manufacture ;
        char *model;
        char *model_name;

        unsigned int weight;
        char * item_model;
        char *os;
        dim  *pdim ;
    public :
        Keyboard(char * _name, int _price,char * _brand,char * _manufacture,char * _model,char * _model_name,
        unsigned int _weight, char * _item_model,char *_os,float height,float lenght,float width ):name (_name),price (_price), 
        brand (_brand),  manufacture(_manufacture), model (_model),model_name (_model_name),weight(_weight),
         item_model (_item_model),os (_os)
         {
           pdim = new dim(lenght,width,height);
         }
    public :
       void show();

};

int main(){
    Keyboard k1("nHP",200,"bhp","mHP","modelHP",
    "model_name_hp",500,"item_model_hp","os_HP",4,5,6);
    k1.show();

}

void Keyboard ::  show(){
    std:: cout << "name is " << name << std :: endl;  
    std:: cout << "price is " << price << std :: endl;
    std:: cout << "brand is " << brand << std :: endl;
    std:: cout << "manugacture is " << manufacture << std :: endl;
    std:: cout << "model is " << model << std :: endl;
    std:: cout << "model name is " << model_name << std :: endl;
    std:: cout << "weight is " << weight << std :: endl;
    std:: cout << "item model is " << item_model << std :: endl;
    std:: cout << "os is " << os << std :: endl;
    std:: cout << "dim are  " << pdim->height << "*" << pdim -> length << "*" << pdim -> width << std :: endl;

}