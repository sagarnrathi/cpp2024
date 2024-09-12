#include<iostream>
class dim{
    friend class mobile;
    private :
        int height;
        int length;
        int width;
    public :
        dim(int _height,int  _length,int _width) : height(_height),length(_length),width(_width){
            puts("---");
        }
};

class mobile{
    char *os;
    dim *pdim;
    char *battery;
    char *connect_technology;
    char *other_dis_feature;
    char *device_int_pri;
    char *other_camera_feature;
    double audio_jack;
    char *form_fact;
    char* color;
    double battery_rating ;
    double weight;
    public :
    mobile(char *_os,int _height,int _length,int _width,char *_battery,
         char *_connect_technology,char *_other_dis_feature,char *_device_int_pri,
         char *_other_camera_feature,double  _audio_jack,char *_form_fact, char *_color,
         double _battery_rating,double _weight
    ):os(_os),battery(_battery),connect_technology(_connect_technology),
    other_dis_feature(_other_dis_feature),device_int_pri(_device_int_pri),
    other_camera_feature(_other_camera_feature),audio_jack(_audio_jack),
    form_fact(_form_fact),color(_color),battery_rating(_battery_rating),weight(_weight)
    {
        puts("--");
        pdim = new dim(_height,_length,_width);
    }

    void show();
    ~mobile(){
        puts("---");
        delete pdim;
        
    }
   
};

int main (){

    mobile pm  ("android",10,20,20,"1 Lithium Polymer batteries required. (included)",
    "Bluetooth, Wi-Fi, Infrared, USB","Wireless","Touchscreen","Rear, Front",3.5,"bar","Hawaiian Blue",5030,205);

    pm.show();

}

void mobile :: show(){
    puts("details are :");

    std :: cout << "os is " << os << std :: endl;
    std :: cout << "dim is " << pdim -> height << "*" << pdim -> length << "*" <<pdim -> width<< std :: endl;
    std :: cout << "nattery is " << battery << std :: endl;
    std :: cout << "connect tech is " << connect_technology << std :: endl;
    std :: cout << "other dis  feature is " << other_dis_feature << std :: endl;
    std :: cout << "device_int_pri is " << device_int_pri << std :: endl;
    std :: cout << "other camera featur  is " << other_camera_feature << std :: endl;
    std :: cout << "audio jack is " << audio_jack << std :: endl;
    std :: cout << "form fact is " << form_fact << std :: endl;
    std :: cout << "color is " << color << std :: endl;
    std :: cout << "battery rating  is " << battery_rating << std :: endl;
    std :: cout << "weight is " << weight << std :: endl;
}