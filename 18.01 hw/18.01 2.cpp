#include <iostream> 
//что такое эти ваши inline ф-ии?
class Telephone
{   
    int id=0; 
    std::string surname; 
    std::string name; 
    std::string sec_name; 
    unsinged int *home_num; 
    unsinged int *mob_num; 
    unsinged int *rab_num; 

    public: 

   explicit Telephone(string surname, string name, string sec_name, int id ) 
    {   
        this->surname = new surname; 
        this->name = new name; 
        this->sec_name = new sec_name; 
        this->home_num=new int [12];  
        this->mob_num=new int [12];  
        this->rab_num=new int [12];  
        id++; 
    }  

    void insert(int i, int val) 
    {    
    if (i > 11)
    std::cout<<"Mistake\n"; 
    else
    {  this->arr[i] = val; }  
    }  

    

    ~Telephone(){
    }
}; 

int main()
{
    Telephone tel; 
    tel("Um", "Bom", "Yam", {0}, {0}, {0}); 
     Telephone tel1; 

    int id; 
    std::string *surname= new string; 
    std::string *name = new string; 
    std::string *sec_name= new string; 
    unsinged int *home_num; 
    unsinged int *mob_num; 
    unsinged int *rab_num; 

    std::cout<<"surname ";  std::cin>>*surname;  tel1.surname = *surname; 
}