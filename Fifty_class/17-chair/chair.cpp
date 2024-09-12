#include<iostream>
struct dim{
    double len;
    double bd;
    double ht;
} ;

class chair{
    private: 
    char *brand;
    char *color;
    char *material;
    struct dim pdim;
    char *size;
    char *net_quantity;
    char *style;
    char *pattern;
    char *included_component;
    char *manufacture;
    char *is_assembly_req;
    
    public:
        chair(
            char *_brand,
            char *_color,
            char *_material,
            double len,
            double bd,
            double ht,
            char *_size,
            char *_net_quantity,
            char *_style,
            char *_pattern,
            char *_included_component,
            char *_manufacture,
            char *_is_assembly_req
        ): brand(_brand),
           color(_color),
           material(_material),
           size(_size),
           net_quantity(_net_quantity),
           style(_style),
           pattern(_pattern),
           included_component(_included_component),
           manufacture(_manufacture),
           is_assembly_req(_is_assembly_req){
            puts("in const");
            pdim.len = len;
            pdim.ht = ht;
            pdim.bd = bd;
            puts("after pdim");
           }
        
        void show();
};

int main(void){
    chair *c = new chair(
        "beAAtho",
        "Black",
        "Nylon",
        10,
        10,
        10,
        "High-Back",
        "1.0 Pack",
        "Black",
        "High-Back",
        "Chair Parts & Assembly Manual",
        "beAAtho office chairs, Plot no C-8/2, Reliable Spaces, beAAtho Pvt Ltd HQ, Near, AMP Gate Rd, Railway crossing, Ambernath, Maharashtra 421501",
        "Yes" );
        puts("calling show");
        c->show();
        delete(c);
        return 0;
}

void chair :: show(void){

    puts("details are ");
    std :: cout << "brand is : "<< brand<< std :: endl;
    std :: cout <<"color is : "<< color << std :: endl;
    std :: cout <<"material is : "<< material << std :: endl;
    std :: cout <<" dim is : "<< pdim.len << " * " << pdim.bd << pdim.ht<< std :: endl;
    std :: cout << "size is : " << size<< std :: endl;
    std :: cout <<"net quantity : "<< net_quantity << std :: endl;
    std :: cout <<"style "<< style << std :: endl;
    std :: cout <<"pattern : "<< pattern << std :: endl;
    std :: cout << "included component :" << included_component << std :: endl;
    std :: cout <<"manufacture "<< manufacture << std :: endl;
    std :: cout <<"assembly req : "<< is_assembly_req << std :: endl;

}