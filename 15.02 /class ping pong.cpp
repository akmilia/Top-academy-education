#include <iostream> 


int main() 
{
    const int y =13; 
    const int x = 41;  
    
    for (int i=0; i<=y; ++i)  
    {   

        for (int j=0; j<=x; ++j) 
        {   
            if (i==0  || i==y)
            std::cout<<"*";  
            else if (j=0 || j == x)
            std::cout<<"*";   
            else std::cout<<" ";  
        }
         std::cout<<"\n"; 
    }
    


}