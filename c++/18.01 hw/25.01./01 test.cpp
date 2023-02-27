#include <iostream> 
#include <string> 

class Human
{
    std::string name = "Ivan" ; 
    std::string surname = "Ivanov"; 

    public: 

   
      
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

}; 

class Apartment 
{
     Human hum_list
}; 

class House
{

}; 

int main()
{
   Human one; 
   
   one.GetName(); 
   one.GetSurname();  
}