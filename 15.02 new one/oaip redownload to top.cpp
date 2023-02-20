#include <iostream> 
#include<string> 
class Animals
{
   public: 
   int sl_hours; 
   int weight; 
   std::string type; 

   Animals() {} 

   Animals (int sl_hours, int weight, std::string type ) 
   { 
    this->sl_hours = sl_hours; 
    this->weight = weight; 
    this->type = type; 
   }
   
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

  Cats (int sl_hours, int weight ) 
   { 
    this->sl_hours = sl_hours; 
    this->weight = weight; 
   }

  void print() 
  { 
    std::cout<<"Cats have almost "<<this->num_meows<<" to communicate \n";  

  } 

  bool is_healthy() 
  { 
    if (weight > 10 || weight<3) 
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
       std::cout<<"New weight\n"; 
   }

}; 

int main( )
{ 
   
   Animals dog (6, 20, "psovie"); 
   Cats cat(20, 12); 

   dog.sleep(); 
   dog + 3;   

   cat.print();  
   cat.sleep(); 
   cat + (-4); 



}
 


 #include <iostream> 
// #include<string> 
// class Animals
// {
//   public: 
//   int sl_hours; 
//   int weight; 
//   std::string type; 

//   Animals() {} 

//   Animals (int sl_hours, int weight, std::string type ) 
//   { 
//     this->sl_hours = sl_hours; 
//     this->weight = weight; 
//     this->type = type; 
//   }
   
//   void sleep() 
//   {
//     std::cout<<"This type of animals "<<this->type<<"sleeps for " <<this->sl_hours<<"hours \n"; 
//   } 

//   void operator+(int x) 
//   {
//     this->weight+=x; 
//     std::cout<<"Current weight changed to "<<this->weight<<"\n"; 
//   }

// }; 

// class Cats : public Animals 
// {
//   public: 
  
//   int num_meows;  

//   Cats (int sl_hours, int weight ) 
//   { 
//     this->sl_hours = sl_hours; 
//     this->weight = weight; 
//   }

//   void print() 
//   { 
//     std::cout<<"Cats have almost "<<this->num_meows<<" to communicate \n";  

//   } 

  
//   /*void sleep() 
//   {
//     std::cout<<"Cats sleep for " <<this->sl_hours<<"hours \n"; 
//   }  */

//   void operator+(int x) 
//   { 
//       if (weight > 10 || weight<3) 
//       { 
//           weight += x;  
//       std::cout<<"New weight\n"; 
//   }
//      else
//       std::cout<<"The cat doesnt need any weight changes\n"; 
//   }

// }; 

// int main( )
// { 
   
//   Animals dog (6, 20, "psovie"); 
//   Cats cat(20, 12); 

//   dog.sleep(); 
//   dog + 3;   

//   cat.print();  
//   cat.sleep(); 
//   cat + (-4); 



// }
