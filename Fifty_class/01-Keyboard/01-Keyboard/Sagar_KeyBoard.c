#include<stdio.h>
#include<stdlib.h>

struct keyboardProps{
    char *name;
    float price;
    char *brand;
    char  *manufacture;
    struct productDimention {
        float lenght;
        float height;
        float width;
    }dim;
    unsigned int weight;
    char *item_model_num;
    char *compatible_device;
    char *special_feature;
    char *mounting_hardware;
    int number_items;
    char *batteries_included;
    char *batteries_req;
    char *keyboard_desc;
    char *conector_type;
    char * hand_orientation;
    char *country_origin;
};

struct keyboardProps new_keyboard = {
    "HP 150 Wired Keyboard",
    549,
    "HP",
    "HP, HP India Sales Pvt Ltd.",
    {
        42.6,
        14.6,
        2.7
    },
    440,
    "664R5AA",
    "Windows 10",
    "Laptop",
    "USB",
    1,
    "Ergonomic",
    "USB Cable",
    "challen",
    "No",
    "Wired",
    "China"
};

int main(){
    
    puts("keyboards technical details");
    printf(" name is %s \n",new_keyboard.name);
    
    printf(" price is %lf \n",new_keyboard.price);
    
    printf(" brand is %s \n",new_keyboard.brand);
    
    printf(" manufacture is %s \n",new_keyboard.manufacture);
    
    printf(" dimension are  is %f  * %f * %f \n",new_keyboard.dim.height,new_keyboard.dim.lenght,new_keyboard.dim.width);
    
    printf(" weight is %d \n",new_keyboard.weight);

    printf(" item model num is %s \n",new_keyboard.item_model_num);

    printf(" compatible is %s \n",new_keyboard.compatible_device);

    printf(" special feature is %s \n",new_keyboard.special_feature);

    printf(" mouting hardware is %s \n",new_keyboard.mounting_hardware);

    printf(" number item is %d \n",new_keyboard.number_items);
    
    printf(" batteries_included  is %s \n",new_keyboard.batteries_included);
    printf(" batteries_req  is %s \n",new_keyboard.batteries_req);
    printf(" keyboard_desc  is %s \n",new_keyboard.keyboard_desc);
    printf(" conector_type  is %s \n",new_keyboard.conector_type);
    printf(" country_origin  is %s \n",new_keyboard.country_origin);
    printf(" hand_orientation  is %s \n",new_keyboard.hand_orientation);

}