#include<iostream>

class pen{
    private :
    char *manufacture;
    char *brand;
    int num_of_item;
    char *manu_part_numl;
    char *country_origin;

    public :
        pen(char *_manufacture,
           char *_brand,
           int _num_of_item,
           char *_manu_part_num,
           char *_country_origin
        ): manufacture(_manufacture),
           brand(_brand),
           num_of_item(_num_of_item),
           manu_part_numl(_manu_part_num),
           country_origin(_country_origin){}
    void show();

};

int main(){
    pen * p = new pen("SHREE SHYAM ENTERPRISES, SHREE SHYAM ENTERPRISES GHAZIABAD",
                  "Generic",
                  1,
                  "HTNK-BLU",
                  "India"
    );
    p->show();
}

void pen :: show(){
    puts("pen is ");

    std::cout << "manufature is : "<< manufacture<< std ::endl;
    std::cout << "brand : " << brand<< std ::endl ;
    std::cout <<"num of item : " << num_of_item << std ::endl  ;
    std::cout <<"manu part number : "<< manu_part_numl <<  std ::endl ;
    std::cout <<"origin : " << country_origin<< std ::endl;
}

