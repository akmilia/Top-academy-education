#include <iostream>
#include <string> 
 
 class Reservoir 
 { 
    //private: 
    protected: 
    std::string name; 
    char res_type;

    public: 

    Reservoir(){} 

    Reservoir(const Reservoir& other ) 
    {
       this->name = other.name; 
       this->res_type = other.res_type; 
    } 

    Reservoir(std::string name, char res_type)
    {
       this->name = name; 
       this->res_type = res_type; 
    } 

    
    bool type(const Reservoir& other) 
    { 
      if (Reservoir.getType() == other.getType())
    }  

    //you gotta fix it
    /*void add_back(type val) 
    {
        if (this->size+1 > this->cap ) 
        std::cout<<"You are trying to do an impossible stuff\n"; 
        else 
        {
            this-> arr[size] = val; 
            size++; 
        }
    } 

    void del_index(int index)
    {
        if (index >= this-> size )
        std::cout<<"You are trying to do an impossible stuff\n";  
        else 
        {
            for (int i=index; i<this->size; ++i) 
            {
                 this->arr[i]=this->arr[i+1]; 

            }  
            this->size--; 
        }

    } 
    
    //1-st version, to be honest i dont like it
    void add_by_index(type val, int index) 
    {
       type * tmp = new type [this->size - index + 1 ];  
       int j= 0; 
       for (int i=index; i<this->size; ++i ) 
       { 
           tmp[j] = this->arr[i]; 
            j++; 
       }  
       
       j=0; 
       this->arr[index] = val; 
       this->size++; 

       for (int i=index+1; i<this->size; ++i ) 
       { 
           this->arr[i] = tmp[j]; 
            j++; 
       }  
    } */ 

    char getType()
    {return res_type; }


    ~Reservoir(){}
 }; 

 class Extra_Res: public Reservoir
 {
     private: 
     
     int depth; 
     int radius;  

     public: 
     Extra_Res(){} 
     Extra_Res ()
     {  
        std::cout<<"Enter the depth/the radius\n"; 
        std::cin>>(this->depth); 
        std::cin>>(this->radius);
     } 

     void volume( ) const
    {
        std::cout<<"Volume "<<3,14*(this->radius)*(this->radius)*(this->depth); 
        
    } 

    int square() const
    {
        return 3,14*(this->radius)*(this->radius);
    } 

    bool operator<(const Reservoir &other) 
    {
    return Reservoir.square() < other.square(); 
    } 


 }; 

 int main()
 {

 }