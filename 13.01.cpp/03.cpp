#include <iostream>
#include <ctime>
using namespace std; 

void zapol(int *a, int n) 
{   
    for (int i=0; i<n; i++) 
    a[i]=((rand()%100)/(rand()%25)); 
}  

void vivod(int *a, int n)
{   
    for (int i=0; i<n; i++) 
    cout<<a[i]<<" \t"; 
    
    cout<<"\n"; 
}   

void DeleteEven(int a[], int size) 
{    
    int count = 0; 
     for (int i=0; i<size; i++) 
     {
         if (a[i]%2!=0) count++; 
     } 
     
     int *mas_even = new int [count]; 
    
    int i=0; 
    int j=0; 
    while (i<size) 
    {
        if (a[i]%2!=0) 
         { mas_even[j] = a[i]; 
          j++;  } 
           
        i++; 
    } 
    
    for (int i=0; i<count; i++) 
    cout<<mas_even[i]<<" \t"; 
    
    delete []mas_even; 
}

void DeleteOdd(int a[], int size) 
{    
    int count = 0; 
     for (int i=0; i<size; i++) 
     {
         if (a[i]%2==0) count++; 
     } 
     
     int *mas_even = new int [count]; 
    
    int i=0; 
    int j=0; 
    while (i<size) 
    {
        if (a[i]%2==0) 
         { mas_even[j] = a[i]; 
          j++;  } 
           
        i++; 
    } 
    
    for (int i=0; i<count; i++) 
    cout<<mas_even[i]<<" \t"; 
    
     delete []mas_even; 
} 

int main()
{  
  int size=0; 
   
  cout<<"Size "; 
  std::cin >> size; 
  cout<<"\n"; 
   
  srand(time(NULL) ); 
  int *arr1=new int[size];
  
    zapol(arr1,size); 
    cout<<"INT arr1 \n"; 
    vivod(arr1, size);  
    
    bool ready = true; 
    
    while (ready) {
 cout << "\n What do you wanna do with the array? \n" 
      << "1. Delete all even numbers\n"
      << "2. Delete all odd numbers\n"
      << "3. Nothing \n"
      << "Where would you like to start : "; 
      int n=0; 
 cin >> n;
 switch (n) { 
 case 1: 
 {
  DeleteEven(arr1, size); 
 }
 break;  
 
case 2: 
 {
     DeleteOdd(arr1, size); 
 }
break; 

default: 
ready = false; 
break; 

} 

} }