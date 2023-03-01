#include <iostream>  
#include <ctime> 

class Engine
{
   private: 
   std::string name; 
   int power; 
   int weight;

   public:  
   
    Engine(){} 
    Engine(std::string name, int power, int weight)
    {
        this->name= name;; 
        this->power=power; 
        this->weight=weight;
    } 
     
    std::string getName()const { return this->name; }  
    int getPower( ) const {return this->power; } 
    int getWeight() const {return this->weight; }

}; 
 std::ostream& operator << (std::ostream &os, const Engine &p)
{
    return os<<"Name " << p.getName()<< "; power " << p.getPower()<<"; weight "<<p.getWeight();
}
class Machine
{
   private: 
   Engine eng; 
   std::string color; 
   int price;

   public:  
   
    Machine(){} 
    Machine(Engine engP, std::string colorP, int priceP) : eng {engP}, color {colorP}, price {priceP} {}

    std::string getColor()const { return this->color; }  
    int getPrice( ) const {return this->price; }   
    Engine &getEng() { return this->eng; }

}; 

 std::ostream&operator << (std::ostream &oss,  const Machine& p)
{   
    return oss<<" color "<<p.getColor()<<" price "<<p.getPrice();
}


int main()
{
   Engine test("tesr", 1500, 50); 
   Machine test1(test, "azur", 2000000);   
   std::cout<<test<<"\n";   

   std::cout<<test1.getEng()<<"\n"; 
   std::cout<<test1<<"\n"; 
}