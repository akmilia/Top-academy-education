#include <iostream>
#include <algorithm>
using namespace std; 
//тут где-то проблема с размерностью нового массива, из-за чего пропадает 1 элемент
//я ее исправлю, честно, но чуть позже
 
int comp1 (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
} 

void zapol(int *a, int n) 
{   
    for (int i=0; i<n; i++) 
    a[i]=rand()%10; 
}  


void vivod(int *a, int n)
{  
    for (int i=0; i<n; i++) 
    cout<<a[i]<<" \t"; 
    
    cout<<"\n"; 
} 
 
int main()
{    
    srand(time(NULL)); 
    int n1,n2,i1,i2,k1,k2,ir;
    
    // Ввод данных
    cout<<"Array 1 \n"; 
    cin >> n1;
    int *arr1=new int[n1];
    zapol(arr1, n1); 
    vivod(arr1, n1); 
    cout<<"Array 2 \n"; 
    cin >> n2;
    int *arr2=new int[n2];
    zapol(arr2, n2); 
    vivod(arr2, n2); 
    
    // Сортировка
 
    qsort(arr1,n1,sizeof(int),comp1);
    qsort(arr2,n2,sizeof(int),comp1);
 
    // Удаление дубликатов
 
    k1=i1=0;
 
    while(1)
    {
        if (arr1[i1]==arr1[i1+1])
           i1++;
        else
           arr1[k1++]=arr1[i1++];
        
        if (i1==n1) break;
        
    }
 
    k2=i2=0;
 
    while(1)
    {
        if (arr2[i2]==arr2[i2+1])
           i2++;
        else
           arr2[k2++]=arr2[i2++];
        
        if (i2==n2) break;
        
    }
 
   
    int *res=new int[k1+k2];
 
    i1=i2=ir=0;
    
    while(1)
    {
        if (i1>=k1)
        {
            for (int i=i2; i<k2; i++) res[ir++]=arr2[i];  
            break;
        }
        if (i2>=k2)
        {
            for (int i=i1; i<k1; i++) res[ir++]=arr1[i];  
            break;
        }
        if (arr1[i1]==arr2[i2])
        {
           i1++;
           i2++;
        }
        else if (arr1[i1]<arr2[i2])
                res[ir++]=arr1[i1++];  
             else
                res[ir++]=arr2[i2++];  
        
    }
    cout<<"Array final \n"; 
    vivod(res, ir); 
   
    delete [] arr1;
    delete [] arr2;
    delete [] res;
 
    return 0;
}