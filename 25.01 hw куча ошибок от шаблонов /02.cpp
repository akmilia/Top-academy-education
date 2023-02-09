#include <iostream>
#include <string> 
 
 class Reservoir 
 { 
    private:  
    std::string name; 
    char res_type; 
    int depth; 
    int radius;  

    public: 

    Reservoir(){} 

    Reservoir(const Reservoir& other ) 
    {
       this->name = other.name; 
       this->res_type = other.res_type; 
       this->depth = other.depth; 
       this->radius = other.radius; 
    } 

    Reservoir(std::string name, char res_type)
    {
       this->name = name; 
       this->res_type = res_type; 
       std::cin>>(this->depth); 
        std::cin>>(this->radius);
    } 

    
    bool type(const Reservoir& other) 
    { 
      if (this->res_type == other.res_type) 
      return 1; 
      else return 0; 
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
    return this->square() < other.square(); 
    } 

    bool operator>(const Reservoir &other) 
    {
    return this->square() > other.square(); 
    } 

    
    char getType()
    {return res_type; } 

    void print()
    {
        std::cout<<"Name "<<name; 
        std::cout<<"Type "<<res_type; 
    }


    ~Reservoir(){}
 };  

 //you gotta fix it
    void add_back(Reservoir *arr, Reservoir val, int *size, int *cap) 
    {
        if (*size+1 > *cap ) 
        std::cout<<"You are trying to do an impossible stuff\n"; 
        else 
        {
            arr[*size] = val; 
            size++; 
        } 

        for (int i=0; i<*size; ++i)
        {
            std::cout<<arr[i]<<" "; 
        } 
       std::cout<<"\n"; 
    } 

    void del_index(Reservoir *arr,int index, int *size)
    {
        if (index >= *size )
        std::cout<<"You are trying to do an impossible stuff\n";  
        else 
        {
            for (int i=index; i<*size; ++i) 
            {
                arr[i]=arr[i+1]; 

            }  
            *size--; 
        }
        for (int i=0; i<*size; ++i)
        {
            std::cout<<arr[i]<<" "; 
        } 
       std::cout<<"\n"; 
    } 
    
    
 int main()
 {  
    
    std::cout<<"These are objects you gonna work with\n";
    Reservoir sea("Kaspiskoe", 's'); 
    Reservoir ocean("Pacific", 'o');
    Reservoir pool("chto-to", 'p');   
    Reservoir pool_1(pool); 

    std::cout<<"\n Sea "; sea.print(); 
    std::cout<<"\n Ocean " ; ocean.print();
    std::cout<<"\n Pool "; pool.print(); 
    
    int * cap = new int; 
    *cap=10; 
    int *size = new int; 
    *size = 3; 
    
    Reservoir *reser = new Reservoir[*cap] {sea, ocean, pool}; 
    bool emae = true; 
    int a;
    while (emae) 
    {
    std::cout<<"You also got an array of these elements!\n"
             <<"What do you want to do with it?\n"
             <<"1. Add an element\n"
             <<"2. Delete an element \n"
             <<"3. Nothing \n"; 
    std::cin>>a; 
    switch (a)
    {
    case 1: 
        add_back(reser, Reservoir(), size, cap ); 
        break;
    case 2: 
        del_index(reser, 2, size); 
        break; 

    default: 
        emae = false;
        break;
    }
    
    } 
    std::cout<<"\nThe end"; 
     

    
 }