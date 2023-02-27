#include <iostream> 
#include <string> 

class Human
{
    std::string *name = new std::string("Ivan"); 
    std::string *surname = new std::string("Ivanov"); 

    public: 

    Human(std::string *name,  std::string *surname) //конструктор 
    {
        *(this->name) = *name; 
        *(this->name) = *surname; 
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
        *(this->name)=*name; 
    } 
    
    void SetSurname(std::string *surname) 
    {
        *(this->name)=*surname; 
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
     Human *hum_list;  

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
    std::string an = "Anna"; 
     std::string sur_an = "An";

   Human Anna(&an, &sur_an); 

} 


#include <iostream> 
// #include <string> 

// class Human
// {
//     std::string *name = new std::string("Ivan"); 
//     std::string *surname = new std::string("Ivanov"); 

//     public: 

//     Human(std::string name,  std::string surname) //конструктор 
//     {
//         this->(*name) = name; 
//         this->(*surname) = surname; 
//     };  
      

//     void GetName() 
//     {
//         std::cout<<this->*name<<std::endl; 
//     };  

//     void GetSurname()
//     {
//       std::cout<<" "<<this->*surname<<std::endl;
//     }; 
    
    
//     void SetName(std::string name) 
//     {
//         this->(*name)=name; 
//     } 
    
//     void SetSurname(std::string surname) 
//     {
//         this->(*surname)=surname; 
//     }
    
//     ~Human()
//     {
//         delete name; 
//         delete surname; 

//     }
// }; 

// class Apartment 
// {    
//      int k =0; 
//      Human *hum_list;  
     
//      public:

//      Apartment(Human hum, int k) 
//      {
//         hum_list = new Human[k]; 
//         for (int i=0; i<k; ++i) 
//         hum_list[i]=hum[i]; 
      
//      };  
     
//      ~Apartment(){}; 
     

// }; 

// class House
// {
//      int id; 
//      int k =0; 
//      Apartment *apar_list;  
     
//      public:

//      House(Apartment apar, int k) 
//      {
//         apar_list = new Apartment[k]; 
//         for (int i=0; i<k; ++i) 
//         apar_list[i]=apar[i]; 
      
//      };  
     
//      ~Apartment(){}; 
     
// }; 

// int main()
// {
//   Human Anna("Anna", "a"); 
   

// }