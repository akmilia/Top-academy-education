#include <iostream> 
#include <ctime>


void print (int a, int b, int **mas) 
{
    for (int i = 0; i < a; i++)  
   { 
      for (int j = 0; j < b; j++)   
      { 
        std::cout<<mas[i][j]<<" "; 
      } 

        std::cout<<" \n"; 
   }
} 

int main() 
{   
    srand(time(NULL)); 

    int a, b; 
    std::cout<<"enter sizes\n"; 
    std::cin>>a>>b;  


    int ** mas =  new  int * [a]; 
    for (int i = 0; i < b; i++)         
    mas[i] = new  int [b];   
   
   int x, y; 
   double s=0.0; 
   std::cin>>x>>y; 

   for (int i = 0; i < a; i++)  
   { 
      for (int j = 0; j < b; j++)   
      { 
        mas[i][j] = rand()%(y -  x + 1) + x; 
        s+=mas[i][j]; 
      }
   } 

   print(a, b, mas); 
   std::cout<<s/(1.0*a*b); 
}