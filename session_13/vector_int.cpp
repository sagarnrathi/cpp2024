
class vector{
    
    public: 
        vector();                       // default CC 
        vector(const size_t init_size); // parameterised CC 1 
        vector(
            const size_t init_size, 
            const int init_val
        );                               // parameterised CC 2  

        int get(const size_t index) const;
        void set(const size_t index, int val); 

        void show() const; 
        size_t size() const; 
        size_t resize(const size_t new_size); 
        
};



int main(void){
    vector v1; 
    vector v2(5); 
    vector v3(7, 100); 
    int n = v1.get(5);  // index bound check 
                        // return value at index 
    v1.set(5, 900); 

    v1.show(); 
    v2.show(); 
    v3.show(); 

    int m = v1.size();  // return the current size 
                        // in terms of number of elements 
    size_t new_size = 15; 
    size_t old_size = v1.resize(new_size);  // new_size -> 
                                          
}


