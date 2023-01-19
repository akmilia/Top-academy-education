#include <iostream>
using namespace std;  

int rec_ser(int a, int b) 
{
   if (a==b) return a; 
   else if (a>b) return rec_ser(a-b, b); 
   else return rec_ser(a, b-a); 
} 

int main()
{
    int a, b; 

    cin>>a>>b; 
    cout<<"\n"<<rec_ser(a, b); 

}