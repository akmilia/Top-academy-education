#include <iostream> 
#include <string> 

class Human
{
    std::string *name = new string("Ivan"); 
    std::string *surname = new string("Ivanov"); 

    public: 

    Human(std::string *name,  std::string *surname) //конструктор 
    {
        this->name = *name; 
        this->surname = *surname; 
    };  
      

    void GetName() 
    {
        std::cout<<this->name<<std::endl; 
    };  

    void GetSurname()
    {
      std::cout<<" "<<this->surname<<std::endl;
    }; 
    
    
    void SetName(std::string *name) 
    {
        this->name=*name; 
    } 
    
    void SetSurname(std::string *surname) 
    {
        this->surname=*surname; 
    }
    
    ~Human()
    {
        delete name; 
        delete surname; 

    }
}; 

class Apartment 
{    
     int k =0; 
     Human *hum_list = new Human[k];  

     Apartment() 
     {
        this->hum_list = Human; 
     }; 
     

}; 

class House
{

}; 

int main()
{
   Human Anna("Anna", "a"); 
   

}