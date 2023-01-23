#include <iostream>  
#include <string> 


class Human
{ 
   std::string fullname;  
   int age = 18;  

   public:   
   //конструктор по умолчанию
   Human() : Human("Tanya Grotter", 18) {};

   //конструктор копирования 
   Human(const Human& other): Human(other.fullname, other.age){}

   Human(std::string fullname, int age )  
   {    
        std::cout<<"Fullname "; 
        std::cin>>(this->fullname); 
        std::cout<<"Age "; 
        std::cin>>this->age; 
   }
   
   ~Human(){} 

   std::string GetFullname() {return fullname; }; 
   int GetAge() {return age; };

   void setName(std::string fullname) { this->fullname = fullname; }
   void setAge(int age) { this->age = age; }
}; 

class Apartment
{    
     Human * people; 
     int cap;
     int fam; 


     public: 
     Apartment(){Human(), 0, 0 } 
     Apartment(const Apartment& other) 
    {   this->people = new Human[cap];  
        this->cap=other.cap; 
        for (int i=0; i<this->fam; ++i ) 
        {
            this->people[i] = Human(other.people[i].GetFullname(), other.people[i].GetAge()); 
            this->people[i].setAge(other.people[i].GetAge());
        }
    }  

      Apartment(Human people, int cap,  int fam) 
     {   
         
         this->cap = cap; 
         this->fam=fam; 
     }     

     void add_back(Human val) 
      {   
         if ((this->fam+1) > this->cap)
          std::cout<<"No: cap = "<<this->cap<<" is too big\n"; 
         else
          { this->people[fam] = val; 
         fam++; }
     }    

     void add_to_arr(int index, Human val)
     {  
        Human *tmp = new Human[fam - index]; 
       
        for(int i=index+1; i<this->fam; ++i) 
        { 
          tmp[i]=this->people[i]; 
        } 
         this->people[index]=val; 

        for(int i=index+1; i<this->fam+1; ++i) 
        { 
         this->people[i] = tmp[i]; 
        } 

     } 

     void del(int index)     {
    if (this->fam<= index)
    std::cout<<"Nope\n"; //проверка
    else
    { for (int j=index; j<this->fam; j++) //обеспечивает перебор всех элементов массива
    {
        this->people[index-1] = this->people[index]; 
    } 
        fam--; 
    }
   }
     
     void setHum(Human val) {this->Human} 
     ~Apartment(){ delete []tmp; } 

}; 

class House
{

}; 

int main()
{

}