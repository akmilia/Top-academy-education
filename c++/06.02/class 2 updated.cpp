#include <iostream>  
//huinya metod 
//it has an error with each sqrt
bool prost (int x) 
{   
        return (x * x) % 24 == 1;

 return false;
}
int main() 
{ 

    int a=0, b=0, k=0; 
    std::cin>>a>>b; 

    for (int i=a; i<=b; ++i) 
    { 
        if (prost(i)) 
        { std::cout<<i<<" \n"; 
        k++; }  
    }  

    std::cout<<"\nNumber of "<<k; 

}