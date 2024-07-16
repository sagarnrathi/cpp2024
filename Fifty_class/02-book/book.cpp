#include<cstdio>
#include<cstdlib>
#include<iostream>

class book{
    private :
         char *ASIN;
         char *publisher;
         char *language;
         int file_size;
         char* text_to_speech ;
         char* enhanced_typesetting;
         char * xray;
         char * word_wise ;
         int best_seller_rank;
    public :
         
         book(char *_ASIN, char * _publisher,char *_language,int _file_size,char* _text_to_speech,char* _enhanced_typesetting,
         char * _xray,char* _word_wise,int _best_seller_rank): ASIN(_ASIN),publisher(_publisher),language(_language),
         file_size(_file_size),text_to_speech(_text_to_speech),enhanced_typesetting(_enhanced_typesetting),
         xray(_xray),word_wise(_word_wise),best_seller_rank(_best_seller_rank){

         }
    void show();
} ;

int main(void){
    book *pbook = new book(
        "B08Q8J884D",
"Living Media India Limited (27 December 2020)",
"English",
21087 ,
"Not enabled",
"Not Enabled",
"Not Enabled",
"Not Enabled",
11 
     );
  pbook -> show();
}


void book :: show(){
    puts("book details is :");

    std :: cout << "ASIN : " << ASIN << std :: endl;
    std :: cout << "publisher : " << publisher << std :: endl;  
    std :: cout << "language : " << language << std :: endl;
    std :: cout << "file_size : " << file_size << std :: endl;
    std :: cout << "text_to_speech : " << text_to_speech << std :: endl;
    std :: cout << "enhanced_typesetting : " << enhanced_typesetting << std :: endl;
    std :: cout << "xray : " << xray << std :: endl;
    std :: cout << "word_wise : " << word_wise << std :: endl;
    std :: cout << "best_seller_rank : " << best_seller_rank << std :: endl;
} 