#include <iostream> 
#include<string> 
class Animals
{
   public: 
   int sl_hours; 
   int weight; 
   std::string name;
   std::string type; 

   Animals() {} 
   //Animals (int sl_hours, int weight, std::string name, std::string type ) 
   Animals (int sl_hours, int weight, std::string type ) 
   { 
    this->sl_hours = sl_hours; 
    this->weight = weight; 
    this->type = type; 
   }
   
   std::string getName() const { return this->name; } 
   void setName(std::string val)  { this->name = val; } 

   void sleep() 
   {
    std::cout<<"This type of animals "<<this->type<<"sleeps for " <<this->sl_hours<<"hours \n"; 
   } 

   void operator+(int x) 
   {
    this->weight+=x; 
    std::cout<<"Current weight changed to "<<this->weight<<"\n"; 
   }

}; 

class Cats : public Animals 
{
  public: 
  
  int num_meows;  

  Cats (std::string name, int num_meows ) 
   { 
    this->name = name;
    this-> num_meows = num_meows; 
   }

  void print_fact() 
  { 
    std::cout<<"Cats have almost "<<this->num_meows<<" to communicate \n";  
  } 

  bool is_healthy() 
  { 
    if (weight > 10 || weight<3) 
    {std::cout<<"This cat has health issues \n";  
    return 1; 
    }  
    else 
    { 
         std::cout<<" Your  kitten is 100 per cent  healthy\n"; 
    return 0;  
    } 
  } 

  void sleep() 
  {
    std::cout<<"Cats sleep for " <<this->sl_hours<<"hours \n"; 
   }  

   void operator+(int x) 
   { 
       if (is_healthy()) 
       std::cout<<"The cat doesnt need any weight changes\n"; 
       else  
       weight += x;  
       std::cout<<"New weight\n"; 
   }

}; 

class Dogs : public Animals 
{
  public: 
  int num_burks;  
  int wiggle_speed; 

  Dogs (std::string name, int num_burks, int wiggle_speed ) 
   { 
    this->name = name;
    this->num_burks = num_burks; 
    this->wiggle_speed = wiggle_speed; 
   }

  void print_fact() 
  { 
    std::cout<<"Dogs joy can be measured in wiggle_speed " 
              <<"and for this"<<this->name<< "animal its " << this->wiggle_speed<<" \n";  

  } 

  bool is_healthy() 
  { 
    if (weight > 45 || weight<15) 
    {std::cout<<"This 🐶 has health issues \n";  
    return 1; 
    }  
    else 
    { 
         std::cout<<" Your  puppy is 100 per cent  healthy\n"; 
    return 0;  
    } 
  } 

  void sleep() 
  {
    std::cout<<"Dogs sleep for " <<this->sl_hours<<"hours \n"; 
   }  

   void operator+(int x) 
   { 
       if (is_healthy()) 
       std::cout<<"The dog doesnt need any weight changes\n"; 
       else  
       weight += x;  
       std::cout<<"New weight\n"; 
   }

}; 
class Parrots : public Animals 
{
  public: 
  int words;  

  Parrots (std::string name,int words) 
   { 
    this->name = name; 
    this->words = words; 
   } 

  void print_fact() 
  { 
    std::cout<<"Parrots can memorise over "<<this->words<<" to communicate \n";  

  } 

  bool is_healthy() 
  { 
    if (weight > 5 || weight<1) 
    //{std::cout<<"This cat has health issues \n";  
    return 1; 
    //}  
    else 
    { 
         //std::cout<<" Your  kitten is 100 per cent  healthy\n"; 
    return 0;  
    } 
  } 

  void sleep() 
  {
    std::cout<<"Cats sleep for " <<this->sl_hours<<"hours \n"; 
   }  

   void operator+(int x) 
   { 
       if (is_healthy()) 
       std::cout<<"The cat doesnt need any weight changes\n"; 
       else  
       weight += x;  
       std::cout<<"New weight"<<this->weight<<"\n"; 
   }

}; 
int main( )
{ 
   
   Animals dog (6, 20, "psovie"); 
   Cats cat("barsik", 12); 
   Dogs dogii("baki", 20, 15); 
   Parrots par("shora", 30);

   dog.sleep(); 
   dog + 3;   

   cat.print_fact();  
   cat.sleep(); 
   cat + (-4); 

  par.setName("aboba"); 
  par.is_healthy(); 

}
 