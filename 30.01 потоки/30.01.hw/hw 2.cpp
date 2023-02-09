//class Worker
#include <iostream> 
#include <string> 

class Worker 
{ 
   private: 
   std::string name; 
   std::string pos; 
   int st_year; 
   int sal; 

   public: 

   Worker(){}
   Worker ():("Ivan", "economist",2015, 300000 ) {}
   Worker(std::string nameP, std::string posP,  int st_yearP,  int salP) = {nameP} 
   { 
       
   }
   ~Worker() {}


}; 

int main() 
{ 

}