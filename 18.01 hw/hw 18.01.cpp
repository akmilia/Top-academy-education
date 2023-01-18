#include <iostream>
#include <cmath>
class Drob 
{
   int chis; 
   int znam; 

    public: 

Drob(int chis, int znam ) {
    this->chis=chis;  
    this->znam = znam; 
};   

void sum_dif(int chis1, int znam1) 
{
   if (this->znam + znam1==0) 
   std::cout<<"Thats a mistake "<<this->znam + znam1<<" =0\n"; 
    else 
     { this->chis+=chis1; 
       this->znam+=znam1;  }
}; 

void multip(int chis1, int znam1) 
{
   if (znam1==0) 
   std::cout<<"Thats a mistake "<<this->znam * znam1<<" =0\n"; 
    else 
     { this->chis*=chis1; 
       this->znam*=znam1;  } 

};  

void delen(int chis1, int znam1) 
{
   if (znam1==0 || chis1==0) 
   std::cout<<"Thats a mistake "<<this->znam + znam1<<" =0\n"; 
    else 
     { this->chis*=znam1; 
       this->znam*=chis1;  } 

}; 
 
void stepen(int p) 
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

~Drob(){}; 
}; 

int main() 
{
    Drob dro(1, 1);  
    
    
    dro.print(); 
    std::cout<<"\n"; 

    dro.sum_dif(5, 6); 
    dro.print(); 
    std::cout<<"\n"; 

    dro.multip(2, 3); 
    dro.print();  
    std::cout<<"\n"; 
 
    dro.delen(4, 5);  
    dro.print(); 
    std::cout<<"\n"; 
 
    dro.stepen(2); 
    dro.print(); 
    std::cout<<"\n";  

    dro.koren(); 
    dro.print(); 
    
}