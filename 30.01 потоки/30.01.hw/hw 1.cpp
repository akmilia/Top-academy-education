#include <iostream>
#include <string> 

class Book 
{ 
  private:  
  std::string author; 
  std::string name; 
  std::string publ; 
  int year; 
  int page_num; 

  public: 
   
   Book() {}
  //Book() : Book ("po", "yo", "mar", 1987, 4) {} 
  
  Book(const Book& other) 
  { 
    this->author =  other.author; 
    this->publ =  other.publ; 
    this->name=  other.name; 
    this->year=  other.year; 
    this->page_num =  other.page_num; 
  } 

  explicit  Book(std::string name) 
  { 
    this->name = name;
    std::cin>>this->author; 
    std::cin>>this->publ; 
     
    std::cin>>this->year; 
    std::cin>>this->page_num; 
  }  

  std::string getName() 
  { return this-> name; } 
  std::string getAuthor() 
  { return this-> author; }  
  std::string getPub() 
  { return this-> publ; } 
 int getYear() 
 { 
  return this->year; 
 } 

  friend std::ostream& operator<<(std::ostream &out, const Book& book) 
  { 
    out<<" ..."<<"...";
    return out; 
  } 
    ~Book() 
  { 

  } 
  
};  

int main(int argc, char *argv[] ) 
{ 
    Book f; 
    Book s; 
    Book t("er"); 
    Book fr(t);  

    Book arr [4] = {f, s, t, fr}; 
    
    std::string def_aut; 
    std::cout<<"enter author\n"; 
    std::cin>>def_aut;  
    
    std::cout<<"thats your list\n"; 
    for (int i=0; i<4; ++i) 
    {  
      
      if (def_aut == arr[i].getAuthor())
      std::cout<<arr[i].getName()<<" \n"; 
    }
    
    std::cout<<"enter publ\n"; 
    std::cin>>def_aut;  
     
      std::cout<<"thats your list\n"; 
    for (int i=0; i<4; ++i) 
    {  
     
      if (def_aut == arr[i].getPub())
      std::cout<<arr[i].getName()<<" \n"; 
    } 
    
    int def; 
    std::cout<<"enter year\n"; 
    std::cin>>def;  
     
      std::cout<<"thats your list\n"; 
    for (int i=0; i<4; ++i) 
    {  
     
      if (def == arr[i].getYear())
      std::cout<<arr[i].getName()<<" \n"; 
    }
}