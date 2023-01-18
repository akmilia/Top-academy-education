#include <iostream> 

class Telephone
{   
    int id; 
    std::string surname; 
    std::string name; 
    std::string sec_name; 
    int *home_num; 
    int *mob_num; 
    int *rab_num; 

   explicit Telephone(string surname, string name, string sec_name ) 
    {
        this->surname = new surname; 
        this->name = new name; 
        this->sec_name = new sec_name; 
        this->home_num=new int [12];  
        this->mob_num=new int [12];  
        this->rab_num=new int [12];  
    }
}