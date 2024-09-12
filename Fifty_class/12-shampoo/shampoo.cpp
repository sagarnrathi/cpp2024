#include<iostream>

struct dim {
     double ht ;
     double ln;
     double wd;
};
class shampoo{

    private :
       char *model_number;
       char *target_gender;
       char *material_free;
       char *add_feature;
       char *manufacture;
       struct dim pdim; 
    public :
       shampoo(
        char *_model_number,
        char *_target_gender,
        char *_material_free,
        char *_add_feature,
        char *_manufacture,
        double _ht,
        double _ln,
        double _wd
       ) :

       model_number(_model_number),
       target_gender(_target_gender),
       material_free(_material_free),
       add_feature(_add_feature),
       manufacture(_manufacture){
        pdim.ht = _ht ;
        pdim.ln = _ln;
        pdim.wd = _wd;
       }

       void show();


};

int main(void){
    shampoo* p = new shampoo(
        "LBHZ100",
        "Female",
        "Paraben Free",
        "Anti Frizz",
        "Hindustan Unilever Limited",
        4.6,
        4.6,
        4.6
    );
    p->show();

}

void shampoo::show(){
    
    puts("detail are ");
    std::cout << "model number : "<< model_number<< std::endl;
    std::cout << "target gender : " << target_gender<< std::endl;
    std::cout <<"materail  fee "<< material_free << std::endl;
    std::cout << "add feature : "<< add_feature<< std::endl;
    std::cout << "manufacture : " << manufacture << std::endl;
    std::cout << "dimenstion are " << pdim.ht << " * " <<pdim.ln << " * "<<pdim.wd<< std::endl;
}