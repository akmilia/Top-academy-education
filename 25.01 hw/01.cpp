#include <iostream>  
#include <string> 


class Human
{ 
   std::string *fullname;  
   int age = 18;  

   public:   
   //конструктор по умолчанию
   Human(){"Tanya Grotter", 18};

   //конструктор копирования 
   Human(const Human& other): Human(other.fullname, other.age){}

   Human(std::string fullname, int age )  
   {    
        std::cout<<"Fullname "; 
        std::cin>>*(this->fullname); 
        std::cout<<"Age "; 
        std::cin>>this->age; 
   }
   
   ~Human(){
    delete (this->fullname); 
   } 

   std::string GetFullname() {return *fullname}; 
   int GetAge(return age);

   void setName(std::string fullname) { *(this->fullname) = fullname; }
   void setAge(int age) { this->age = age; }
}; 

class Apartment
{    
     Human * people; 
     int cap;
     int fam; 
     int num; 

     public: 
     Apartment(){4, 1, 1} 
     Apartment(const Apartment& other) 
    {   this->people = new Human[fam];  
        this->cap=other.cap; 
        for (int i=0; i<this->fam; ++i ) 
        {
            this->people[i].fam = this->people[i].fam; 
            this->people[i].num = this->people[i].num ; 


        }
        other.fam, other.num, other.people} 

     Apartment(int fam, int num) 
     {
         this->fam=fam; 
         this->num=num; 
         
     }  
     ~Apartment(){} 
     
     void add_to_arr(Human hum)
     {

     } 

     Data(const Data &other) {
        this->users = new User[other.size];
        this->size = other.size;
        for (int i = 0; i < this->size; ++i) {
            this->users[i].setName(other.users[i].getName());
            this->users[i].setAge(other.users[i].getAge());
        }
    }
}; 

class House
{

}; 

int main()
{

}