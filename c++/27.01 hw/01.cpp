#include <iostream>
#include <cmath> 
template <typename T>
class Drob 
{
   T chis; 
   T znam; 

    public:  
Drob(){}; 

Drob(T chis, T znam ) {
    this->chis=chis;  
    this->znam = znam; 
};

void sum_dif( Drob& other) 
{
   if (this->znam + other.znam==0) 
   std::cout<<"Thats a mistake \n"; 
    else 
     { this->chis+=other.getChis(); 
       this->znam+=other.getZnam();  }
}

void multip(Drob& other) 
{
   if (this->znam==0 || other.getZnam()==0) 
   std::cout<<"Thats a mistake \n"; 
    else 
     { this->chis*=other.getChis(); 
       this->znam*=other.getZnam();  } 

}

void delen(Drob& other) 
{
   if (this->znam==0 || other.getChis()==0|| other.getZnam()==0) 
   std::cout<<"Thats a mistake \n"; 
    else 
     { this->chis*=other.getZnam(); 
       this->znam*=other.getChis();  } 

} 
 
void stepen(T p) 
{
     this->chis = pow(this->chis, p); 
     this->znam = pow(this->znam, p);

} 

void koren() 
{
    this->chis = sqrt(this->chis); 
     this->znam = sqrt(this->znam);
}
void print() 
{
   std::cout<<chis<<"\n"
            <<"---"<<"\n"
            <<znam<<"\n"; 
}

T getChis()
{
    return this->chis; 
} 
T getZnam()
{
    return this->znam; 
}

~Drob(){}; 
}; 

int main(int argc, char const *argv[]) 
{
    Drob<int> dro(1, 1);   
    Drob<double> dro1(1.34, 3.56); 
    Drob<double> dro2(7.4, 5.94);
    
    dro.print(); 
    std::cout<<"\n"; 

    dro.sum_dif(dro); 
    dro.print(); 
    std::cout<<"\n"; 

    dro2.multip(dro1); 
    dro2.print();  
    std::cout<<"\n"; 
 
    dro2.delen(dro1);  
    dro2.print(); 
    std::cout<<"\n"; 
 
    dro.stepen(2); 
    dro.print(); 
    std::cout<<"\n";  

    dro.koren(); 
    dro.print(); 
    
}