#include <iostream> 
#include <string> 

class Parent { 
    protected:  
    std::string name; // 
    public:   
    Parent(): Parent("parent") {}  

    Parent(const Parent& other) : Parent (other.name) { } 
    Parent(const std::string&name) 
    { 
        this->name =name; 
        std::cout<<"name "<<name<<" \n"; 
    }  

    virtual void say() 
    { 
        std::cout<<"Mi amo "<<name<<" \n"; 
    }
   
   ~Parent() 
   { 
    std::cout<<"\nbyeee"; 
   }
};  

class Child  : public Parent
{    
    std::string last_name; 
     public: 
     Child() : Child ("child") {} 
     Child(const Child &other) { } 
     Child(const  std::string &last_name ) { 
        this->last_name = last_name;  
        std::cout<<"The last name is "<<this->last_name<<" \n"; 
      } 
    
    Child(const  std::string &name, const  std::string &last_name ) { 
        this->last_name = last_name;  
        std::cout<<"The full name is"<<this->name<<" "<<last_name<<" \n"; 
      } 
 

     void sayHibyName(const std::string&name, const std::string&last_name ) 
      { 
         std::cout<<"HI"<<name<<" "<<last_name<<" \n" ; 
      }  

      void say() 
    { 
        std::cout<<"Mi amo "<<name<<" "<<last_name<<  "\n"; 
    }

      ~Child( ) 
      { 
        std::cout<<"\n hochu, my name was"<<last_name<<"\n"; 
      }
}; 

int main() 
{ 
    Parent *  test = new Child ("au" );  
    test->say(); 
    Child test_child("bu"); 

    test_child.sayHibyName("niko niko ni", "ohayo "); 
    test_child.say(); 

    return 0; 
}