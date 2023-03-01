#include <iostream>  
#include <ctime> 

int main()
{
   srand(time(NULL));  
   int s, z; 
   std::cin>>s>>z; 

   int **mas = new int * [s]; 

   for (int i=0; i<s; ++i) 
   mas[i] = new int[z]; 
   
   int sum =0; 
   for (int i=0; i<s; ++i) 
   {   
        for (int j=0; j<z; ++j) 
        {  
            mas[i][j]=rand()%170 - 85; 
            sum+=mas[i][j];
        }  

        std::cout<<"Sred for i = "<<i<<" "<<double(sum/z)<<"\n"; 
        sum=0; 
   }
  
}
