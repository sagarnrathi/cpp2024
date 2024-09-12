#include<iostream>
class dim {
    friend class bookshelf;
    private : 
       int height;
       int width;
       int length;
    public:
    dim(int _length,int  _width,int _height):height(_height),length(_length),width(_width){

    }
};
class bookshelf{
    
    private :
        char *material;
        char *livingroom;
        char *sp_feature;
        dim *pdim;

    
    public :
       bookshelf(char *_material,
char *_livingroom,
char *_sp_feature,
int _height,
int _length,
int _width):material(_material),livingroom(_livingroom),
    sp_feature(_sp_feature) {
         pdim = new dim(_length,_width,_height);

        }
          
    ~bookshelf(){
        free(pdim);
    }
       void show();
};

int main(void){
    bookshelf *bs = new bookshelf(
        
"Engineered Wood"
,"Living Room"
,"Durable"
,20
,60
,31    );

bs-> show();
}

void bookshelf:: show(){
    puts("book detail is ");
    std::cout <<"material is " <<  material << std :: endl;
    std::cout <<"room  is " <<  livingroom << std :: endl;
    std::cout <<"sp  is " <<  sp_feature << std :: endl;
    std::cout <<"dinsion is " <<  pdim ->height << "*"<< pdim -> width <<"*" << pdim -> length << std :: endl;

}