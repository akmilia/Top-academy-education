#include <iostream>  
#include <cmath>
 
bool prost (int x) 
{   
    int k=0; 
    for (int i=2; i<=sqrt(x); ++i)  
    { 
        if (x%i==0) return 0 ; 
    } 
    return 1; 
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