#include <iostream>  
#include <string> 



class Human
{ 
   std::string fullname;  
   int age = 18;  

   public:   
   //конструктор по умолчанию
   Human() : Human("Tanya Grotter", 18) {};

   //конструктор копирования 
   Human(const Human& other): Human(other.fullname, other.age){}

   Human(std::string fullname, int age )  
   {    
        std::cout<<"Fullname "; 
        std::cin>>(this->fullname); 
        std::cout<<"Age "; 
        std::cin>>this->age; 
   }
   
   ~Human(){} 

   std::string GetFullname() {return fullname; }; 
   int GetAge() {return age; };

   void setName(std::string fullname) { this->fullname = fullname; }
   void setAge(int age) { this->age = age; }
}; 

class Apartment
{    
     Human * people; 
     int cap;
     int fam; 


     public: 
     Apartment(){ } 
      
     Apartment(const Apartment& other) 
    {   this->people = new Human[cap];  
        this->cap=other.cap; 
        for (int i=0; i<this->fam; ++i ) 
        {
            this->people[i] = Human(other.people[i].GetFullname(), other.people[i].GetAge()); 
            this->people[i].setAge(other.people[i].GetAge());
        }
    }  

      Apartment(Human *people, int cap,  int fam) 
     {  
         this->cap = cap; 
         this->fam=fam; 
        this->people = new Human[cap];  
        for (int i=0; i<this->fam; ++i ) 
        {
            this->people[i] = people[i]; 
        }
         
        
     }     

     void add_back(Human val) 
      {   
         if ((this->fam+1) > this->cap)
          std::cout<<"No: cap = "<<this->cap<<" is too big\n"; 
         else
          { this->people[fam] = val; 
         fam++; }
     }    

     void add_to_arr(int index, Human val)
     {  
        Human *tmp = new Human[fam - index]; 
       
        for(int i=index+1; i<this->fam; ++i) 
        { 
          tmp[i]=this->people[i]; 
        } 
         this->people[index]=val; 

        for(int i=index+1; i<this->fam+1; ++i) 
        { 
         this->people[i] = tmp[i]; 
        } 

     } 

     void del(int index)     {
    if (this->fam<= index)
    std::cout<<"Nope\n"; //проверка
    else
    { for (int j=index; j<this->fam; j++) //обеспечивает перебор всех элементов массива
    {
        this->people[index-1] = this->people[index]; 
    } 
        fam--; 
    }
   } 

   void print()
   {
    for (int i=0; i<fam; ++i )
     { std::cout<<people[i].GetFullname(); 
       std::cout<<" "; 
       std::cout<<people[i].GetAge(); }

    std::cout<<"\n"; 
   }
     
    int getSize()
    {return fam; }  

    int getCap() 
    {return cap; }  

    Human getHum(int i)
    {return people[i]; }

     ~Apartment(){} 

}; 

class House
{ 
    private: 
    int id; 
    int size1;
    int size2;
    int cap; 
    Apartment **podezd; 

    public: 
    
    House() {}; 

    House(Apartment ** podezd, int size, int cap)
    {
        this->cap = cap; 
         this->size1 = size1; 
        this->size2 = size2; 
         id++; 
        this->podezd = new Apartment *[this->cap];  
        for (int i=0; i<this->size1; ++i ) 
        {   
            podezd[i]=new Apartment[this->cap]; 
            for (int j=0; j<this->size2; ++j)
            {
              this->podezd[i][j] = podezd[i][j]; 
            }
            

        }
    } 

    Apartment &operator[] (int index) 
    {
        return *(this->podezd [index]); 
    }   

    int getId()
    { return id; } 


    ~House(){}; 


};  

int main()
{  
    //only humans after all...
    Human one; 
    Human two("Misha", 15); 
    Human tree("Pisha", 27); 
    
    Human tree_cop(tree); 
    tree_cop.setName("Kisha"); 
    std::cout<<tree_cop.GetFullname()<<"\n";  

    //here we go to the apart-part  

    Human *people = new Human[4] {one, two, tree, tree_cop}; 
    Human *people_1 = new Human[4] {one, Human("Atsumu", 18), Human("Kiri zhena, Kiri zhena bednaya shenchina", 99), Human("emae", 9)}; 
    /*Apartment <Human> peop(people, 4);*/ 

    Apartment one_one; 
    Apartment two_two(people, 8, 4); 
    Apartment two_two_cop(two_two);  

    two_two_cop.add_to_arr(2, Human("emae", 9)); 
    two_two.del(0); 
    std::cout<<"two_two_cop\n"; 
    two_two_cop.print(); 
    std::cout<<"two_two\n"; 
    two_two.print();  
    
    Apartment chto_eto (people, 8, 4); 
     Apartment chto_eto2(people_1, 8, 4);  
    
    Apartment **podezdik = new Apartment*[2][4]{*chto_eto, *chto_eto2}; 
    
    House HOCHUSPAT(1, 2, 4, 8, *podezdik); 
    
}