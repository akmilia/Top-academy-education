#include <iostream> 
#include <string> 
#include <algorithm>

class String
{
 private: 
 std::string* line; 

 public: 
 String(std::string linne): String(){line = new std::string ; *(this->line) = linne;}
 String(){}
 String(const String& other){ line = new std::string; this->line = other.line; } 
 String( std::string* line)
{   
    line = new std::string; 
    const char * ps;
    ps = (this->line)->c_str();

}
 
 int len() const {return ((*line).length()); } 
 void cl() { (*line).clear(); } 

 std::string operator=(std::string linne)
 {
    return (*(this->line) = linne);
 } 

 std::string eq(std::string linne)
 {
    if (*(this->line) == linne) return "There are the same\n"; 
    else return "They are different\n"; 
 } 

 void operator==(std::string linne)
 {
    if (*(this->line)== linne)  std::cout<<"They are the same\n"; 
 } 
 
 void operator!=(std::string linne)
 {
    if (*(this->line) != linne)  std::cout<<"They are different\n"; 
 } 

 std::string operator+(std::string linne) 
 {
    return (*(this->line)+linne); 
 }
 ~String(){ }

}; 
int main()
{
  String str; 
  String bkr(str); 
  String ("156230");
  str + "meow"; 
  
}
