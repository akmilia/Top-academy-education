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
   //Worker ():Worker("Ivan", "economist",2015, 300000 ) {}
   Worker(std::string nameP, std::string posP,  int st_yearP,  int salP) : name {nameP}, pos {posP}, st_year{st_yearP}, sal{salP} {} 
   

   int getSt_Year() const
   { return this->st_year; } 

   int getSal()  const
    { return this->sal; } 
   
   std::string getPos() const
   { return this->pos; } 

   std::string getName() const
   { return this->name; } 

   ~Worker() {} 
};  

std::ostream &operator<< (std::ostream &out, const Worker& qork)
{  
    out<<"Worker "<<" \n"; 
    out<<qork.getName()<<", who works as "<<qork.getPos()<<"\n";  
  

     return out; 
}  


int main() 
{ 
   
   Worker test_1; 
   Worker sila_taigi("Propan", "Gas", 100, 90000000); 
   Worker rabobe("Riftan", "Commander", 10, 270000); 
   Worker HP("Harry", "National-Hero-Pray-Pig-Mothers_Eyes", 17, 0); 


   Worker vot_oni_sleva_napravo[4] = {test_1, sila_taigi, rabobe, HP};  
   
   int *x = new int; 
   std::string *y = new std::string; 
   std::cout<<"Check the experience, enter the number\n"; 
   std::cin>>*x;  

   for (int i=0; i<4; ++i)
   { 
      if (vot_oni_sleva_napravo[i].getSt_Year()>=*x) 
      std::cout<<vot_oni_sleva_napravo[i]<<"\n\n"; 
   } 

   std::cout<<"Check the salary, enter the number\n"; 
   std::cin>>*x;  

   for (int i=0; i<4; ++i)
   { 
      if (vot_oni_sleva_napravo[i].getSal()>=*x) 
      std::cout<<vot_oni_sleva_napravo[i]<<"\n\n"; 
   } 

   std::cout<<"Check the post, enter it\n"; 
   std::cin>>*y;  

   for (int i=0; i<4; ++i)
   { 
      if (vot_oni_sleva_napravo[i].getPos()==*y) 
      std::cout<<vot_oni_sleva_napravo[i]<<"\n\n"; 
   }
}