#include <iostream>
#include <ctime>
using namespace std; 

void zapol(int *a, int n) 
{   
    for (int i=0; i<n; i++) 
    a[i]=(rand()%100)/(rand()%25); 
}  

void vivod(int *a, int n)
{   
    for (int i=0; i<n; i++) 
    cout<<a[i]<<" \t"; 
    
    cout<<"\n"; 
}   

void Together(int *a, int *b, int size_1, int size_2) 
{    
    int size_3 = size_1 + size_2; 
    int *mas_3 = new int [size_3]; 
    
    int j=0;
     for (int i=0; i<size_3; i++) 
     {
         if (i<size_1) mas_3[i]=a[i]; else
          mas_3[i]=b[j++]; 
     } 
    
    
   for (int i=0; i<size_3; i++)
    cout<<mas_3[i]<<" \t"; 
    
     delete []mas_3; 
} 

int main()
{  
  int size_1=0, size_2 =0 ; 
   
  cout<<"Size_1 "; 
  std::cin >> size_1; 
  cout<<"\n"; 
  
  cout<<"Size_2 "; 
  std::cin >> size_2; 
  cout<<"\n";  
  
  srand(time(NULL) ); 
  int *arr1=new int[size_1];
  int *arr2=new int[size_2]; 
  
    zapol(arr1,size_1); 
    cout<<"INT arr1 \n"; 
    vivod(arr1, size_1);  
    
     zapol(arr2,size_2); 
    cout<<"INT arr1 \n"; 
    vivod(arr2, size_2);  
    
    cout<<"\nUnited array \n"; 
    Together(arr1, arr2, size_1, size_2); 
    
     }