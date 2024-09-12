#include<iostream>

class pendrive{
    private:
     char *connectivity_technology;
     char *color;
     struct product_dim{
        int length;
        int bredth;
        int height;
     }p;
     char *flash_memory_type;
     char *manufacture;
     double upc;
     char *item_model_num;

     public :
        pendrive(char *_connectivity_technology,
           char *_color,
            int len,
            int bd,
            int ht,
           char *_flash_memory,
           char *_manufacture,
           double _upc,
           char *_item_model_num
        ):connectivity_technology(_connectivity_technology),
        color(_color),flash_memory_type(_flash_memory),manufacture(_manufacture),
        upc(_upc),item_model_num(_item_model_num){
            
         p.length = len;
         p.height = ht;
         p.bredth = bd;
        }

        void show();

};

int main(void){
    pendrive *p = new pendrive("USB","Gold",9,12,9,"USB","SanDisk Semiconductor (Shanghai) Co. Ltd, Western Digital UK Ltd, 20F No. 918, Unit B,C,D Middle Huai Hai Zhong Road Shanghai 200020 PRC",
    619659199555,"SDDDC4-256G-I35GD");
    p->show();

}

void pendrive::show(){
          puts("details are :");
          std::cout << "technology : " << connectivity_technology<< std::endl;
          std::cout <<"color : "<< color << std::endl;
          std::cout << "dim are "<< p.bredth << " * "<< p.length << " * "<< p.height<< std::endl;
          std::cout << "flash memory is :" <<flash_memory_type<< std::endl;
          std::cout << "manufacture is "<<manufacture<< std::endl;
          std::cout <<"upc is :"<< upc << std::endl;
          std::cout << "item model num "<< item_model_num<< std::endl;
}