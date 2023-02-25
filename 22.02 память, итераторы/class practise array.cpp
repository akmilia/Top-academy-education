#include <iostream>
#include <map>
#include <memory>

template <typename T> 
class Array
{
    std::unique_ptr<T*> arr; 
    int size ; 
    int cap; 

    public: 
    Array() : arr(new T()) {}
    Array(const Array& other) : arr(new T())
    { 
        this->size = other.size; 
        this->cap = other.cap;  
        
        for (int  i =0; i< this->size; ++i) 
        {
            this->arr.get()[i] = other.arr.get()[i]; 
            
        }
    } 
    Array(int size, T ar[])  : arr(new T[size])
    {
        this->size = size; 
        this->cap = this->size *2;  
       // arr = (new T(this->cap)); 
        for (int  i =0; i< this->size; ++i) 
        {
            this->arr.get()[i] = ar[i]; 
        }
    } 


    void add_begin(T val) 
    { 
        T *tmp = new T[this->size]; 
        for (int i=0; i<this->size; ++i) 
        {
            tmp[i] = this->arr.get()[i]; 
        } 
        this->arr[0] = val; 
        this->size++; 
        for (int i=1; i<this->size; ++i) 
        {
           this->arr.get()[i] =  tmp[i]; 
        } 
    }
    void add_end(T val)  
    { 
        this->size++; 
        this->arr[this->size]=val; 
    } 

    void delete_begin() 
    {
         T *tmp = new T[this->size]; 
        for (int i=1; i<this->size; ++i) 
        {
            tmp[i] = this->arr.get()[i]; 
        } 
        this->size--; 
        for (int i=0; i<this->size; ++i) 
        {
           this->arr.get()[i] =  tmp[i]; 
        } 
    }
    void delete_end() 
    { 
        this->size--; 
    } 

    void print_arr() const
    { 
       for (int i=1; i<this->size; ++i) 
        {
           std::cout<<this->arr.get()[i]<<" "; 
        } 
        std::cout<<"\n"; 
    } 
}; 

int main()
{ 
   int *test_arr = new  int ((1, 2, 3, 4, 5 ,6)); 
   double *test1_arr = new  double ((1.3, 2, 3.98, 4)); 

   Array <int> test(6, test_arr); 
   Array <double> test_2(4, test1_arr); 

   test.add_begin(121); 
   test.add_end(169); 
   test.print_arr(); 

   test_2.delete_begin(); 
   test_2.delete_end(); 
   test_2.print_arr(); 



}