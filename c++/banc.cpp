#include <iostream> 
#include <string> 
//2 var - vet clinic

class VetClinic
{
    private: 
    std::string name; 
    std::string brid; 
    int age; 

    public: 

    VetClinic () : VetClinic ("Tobik", "none", 1) {}
    VetClinic (const VetClinic& other) : VetClinic (other.name, other.brid, other.age) {}
    VetClinic (std::string name, std::string brid, int age)
    { 
        this->name = name; 
        this->brid = brid; 
        this->age = age; 
    } 

    std::string getName() const {return this->name; }
    std::string getBrid() const {return this->brid; }
    int getAge() const {return this->age; } 

    void setName(std::string name)  {this->name = name ; }
    void setBrid(std::string brid)  {this->brid = brid ; }
    void setAge(int age)  {this->age = age ; } 

    void print_b() const 
    { 
        std::cout<<" Pet of the brid "<<this->brid<<" is called "<<this->name<<"\n"; 
    } 

    void print_a() const 
    { 
        std::cout<<" Pet called "<<this->name<<" is "<<this->age<<" years old\n"; 
    }

  
    ~VetClinic () {}
}; 

class Clinic
{
    
    private: 
    int length; 
    int capasity; 
    VetClinic *_vet_cl; 
    //VetClinic *_vet_cl = new VetClinic [capasity]; 


    public:  

    Clinic () { }
    Clinic ( int length, VetClinic *_vet_cl__) 
    { 
         this->length = length; 
         this->capasity = length*2; 

        _vet_cl = new VetClinic [this->capasity];  

         for (int i=0; i < this->length; i ++) 
         { 
            this->_vet_cl[i] = _vet_cl__[i]; 
         }

    } 

    void print() const
    { 
        for (int i =0; i< this->length; ++i) 
        {
             std::cout<<" Pet's name is  "<<_vet_cl[i].getName()<<" and he is "<<_vet_cl[i].getAge()<<" years old\n"; 
        }
    } 

     void add_back(VetClinic val ) 
    {
        if (this->length+1 > this->capasity ) 
        std::cout<<"You are trying to do an impossible stuff\n"; 
        else 
        {
            this-> _vet_cl[length].setName(val.getName());  
            this-> _vet_cl[length].setBrid(val.getBrid());  
            this-> _vet_cl[length].setAge(val.getAge());  
            this->length++; 
        }
    } 

    void add_front(VetClinic val) 
    {
        if (this->length+1 > this->capasity ) 
        std::cout<<"You are trying to do an impossible stuff\n"; 
        else 
        {
           this-> _vet_cl[0].setName(val.getName());  
            this-> _vet_cl[0].setBrid(val.getBrid());  
            this-> _vet_cl[0].setAge(val.getAge());  
            this->length++; 
        }
    }  

    void add_by_index(VetClinic val, int index) 
    {
       VetClinic * tmp = new VetClinic [this->length - index + 1 ];  
       int j= 0; 
       for (int i=index; i<this->length; ++i ) 
       { 
          tmp[j].setName(val.getName());  
            tmp[j].setBrid(val.getBrid());  
            tmp[j].setAge(val.getAge());  
            j++; 
       }  
       
       j=0; 
       this->_vet_cl[index] = val; 
       this->length++; 

       for (int i=index+1; i<this->length; ++i ) 
       { 
           this-> _vet_cl[i].setName(tmp[j].getName());  
            this-> _vet_cl[i].setBrid(tmp[j].getBrid());  
            this-> _vet_cl[i].setAge(tmp[j].getAge());  
            j++; 
       }    
    }  
   

    void del_index(int index)
    {
        if (index >= this-> length )
        std::cout<<"You are trying to do an impossible stuff\n";  
        else 
        {
            for (int i=index; i<this->length; ++i) 
            {
                 this->_vet_cl[i]=this->_vet_cl[i+1]; 

            }  
            this->length--; 
        }

    }  

    const VetClinic &operator[]   (int i ) const
    { 
        return _vet_cl[i]; 
    } 
    
     int getLength() const {return this->length; } 
    int getCapasity() const {return this->capasity; } 


    ~Clinic ( ) { delete []_vet_cl; }


}; 

int main() 
{ 
    VetClinic one; 
    VetClinic two ("Two", "korgi", 5); 
    VetClinic three (two); 
    three.setName("Three "); 

    VetClinic _vet_cl [3] {one, two, three} ; 
    Clinic _vet (3, _vet_cl); 

    _vet[1];  

    VetClinic four ("Ron", "rat", 13); 
    _vet.add_front( four); 
}