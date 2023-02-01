#include <iostream>  
#include <string> 
//help please 
template<typename T> 
class Flat
{
   private: 
   T prize; 
   T square;
   public: 

   Flat (){}

   Flat(const Flat& other) 
   {
         this->prize = other.getPrize(); 
         this->square = other.getsquare(); 
   } 
   //Flat(const Flat &other) : Flat(other.prize, other.square) {}//

   Flat()
   { 
     std::cout<<"Enter desired parametrs: prize, square  and  type\n"; 
     std::cin>>(this->prize); 
     std::cin>>(this->square); 
   }   
   void operator> (Flat& other) 
   { 
        if (this->prize > other.getPrize()) 
    std::cout<<"First cost more than the second\n" ;
    else if (this->prize < other.getPrize())  
    std::cout<<"Second cost more than the first\n" ;
    else std::cout<<"They are basically the same\n" ; 
    } 

    void comp_square (Flat& other)
    {if (this->square >  other.square ) 
      std::cout<<"First is biger\n" ; 
      else if (this->square < other.square ) 
      std::cout<<"First is smaller\n" ; 
      else std::cout<<"They are basically the same\n" ; 
    }

   T getPrize() 
   { return this->prize; }  

   T getsquare() 
   { return this->square; }  

   ~Flat(){}
}; 

int main()
{
   Flat <int>  odin(); 
   Flat <int>  dva(); 
   Flat <double> tri ();  
   Flat <double> chetire(tri); 

}
