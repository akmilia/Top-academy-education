#include <iostream>  
#include <string> 
template<typename T> 
class Overcoat
{
   private: 
   T prize; 
   T size;
   char typ; 
   std::string firm; 

   public: 

   Overcoat (){}

   /*Overcoat(const Overcoat& other) 
   {
         this->prize = other.getPrize(); 
         this->size = other.getSize(); 
         this->typ=other.getType();  
         this->firm = other.getFirm(); 
   } */
   Overcoat(const Overcoat &other) : Overcoat(other.prize, other.size, other.typ, other.firm) {}

   Overcoat(std::string firm)
   { 
     std::cout<<"Enter desired parametrs: prize, size  and  type\n"; 
     std::cin>>(this->prize); 
     std::cin>>(this->size); 
     std::cin>>(this->typ);
     this->firm = firm; 
   }   

   void comp_type(Overcoat& other) //ono polchasa oralo chto ne hochet ee rjmpilirovat
   {
     if (this->typ == other.getType()) std::cout<<"The types are  the same\n"; 
     else std::cout<<"The types are  not the same\n"; 
   } 
   
   void operator> (Overcoat& other) 
   { 
    if (this->typ != other.getType())   std::cout<<"Impossible\n"; 
    else { 
        if (this->prize > other.getPrize()) 
    std::cout<<"First cost more than the second\n" ;
    else if (this->prize < other.getPrize())  
    std::cout<<"Second cost more than the first\n" ;
    else std::cout<<"They are basically the same\n" ; 
    }
    
   }

   T getPrize() 
   { return this->prize; }  
   /*double getPrize() 
   { return this->prize; }  

   int getSize() 
   { return this->size; }*/
   T getSize() 
   { return this->size; }  

   char getType()
   { return (this->typ); }  

   std::string getFirm()
   {return this->firm; }

   ~Overcoat(){}
}; 

int main()
{
   Overcoat <int>  palto("Mteoo"); 
   Overcoat <int>  tranch(palto); 
   Overcoat <double> kurtka("FinFlare");  
   Overcoat <double> puhovik("Mteoo"); 

   palto.comp_type(tranch); 
   kurtka > puhovik; 

}
