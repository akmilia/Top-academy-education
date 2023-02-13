#include <iostream>  
#include <cmath>   
#include <string>  
#include <stdlib.h>

template <typename T> 
class Array
{ 
   private: 
   int size;
   int capacity; 
   T *arr;  

   public: 
   //copying constructor - may diifer
    Array(const Array &other) : Array(other.arr, other.size) {}    

    Array(const T* arr, int size)
    {   
        this->capacity=size*2;  
        this->arr=new T[this->capacity]; 

        this->size=size; 

        for (int i =0; i < size ; ++i) 
        {
            this->arr[i]=arr[i]; 
        } 

    }     

    void add_back(T val) 
    {
        if (this->size+1 > this->cap ) 
        std::cout<<"You are trying to do an impossible stuff\n"; 
        else 
        {
            this-> arr[size] = val; 
            size++; 
        }
    } 

    void add_front(T val) 
    {
        if (this->size+1 > this->cap ) 
        std::cout<<"You are trying to do an impossible stuff\n"; 
        else 
        {
            this-> arr[0] = val; 
            size++; 
        }
    } 
   

    void del_index(int index)
    {
        if (index >= this-> size )
        std::cout<<"You are trying to do an impossible stuff\n";  
        else 
        {
            for (int i=index; i<this->size; ++i) 
            {
                 this->arr[i]=this->arr[i+1]; 

            }  
            this->size--; 
        }

    }  

    
    const T &operator[]   (int i ) 
    { 
        return arr[i]; 
    } 
    void getByIndex(int i) 
    { 
        return arr[i]; 
    }
    
    //1-st version, to be honest i dont like it
    void add_by_index(T val, int index) 
    {
       T * tmp = new T [this->size - index + 1 ];  
       int j= 0; 
       for (int i=index; i<this->size; ++i ) 
       { 
           tmp[j] = this->arr[i]; 
            j++; 
       }  
       
       j=0; 
       this->arr[index] = val; 
       this->size++; 

       for (int i=index+1; i<this->size; ++i ) 
       { 
           this->arr[i] = tmp[j]; 
            j++; 
       }    
       
    
    }  

int getSize() const
    {return size; } 

~Array()
   {
    delete [] arr; 
    }


}; 

template <typename T> 
class Algorithm 
{ 
    private: 
    //T *arr; 

    public: 
    void print (const T &arr, const int size) const
 { 
      for (int i=1; i< size; ++i)  
      std::cout<<arr[i]<<"  "; 

      std::cout<<"\n"; 
 } 

 T find_max(const T &arr, int size) 
 {   
    T *max = new T;
    *max = arr[0];  
    for (int i=1; i< size; ++i) 
    {
        if (arr[i]>*max) 
        *max = arr[i]; 
    } 
    return *max; 
 } 

 T find_min(const T &arr, int size) 
 {   
    T *min = new T;
    *min = arr[0];  
    for (int i=0; i< size; ++i) 
    {
        if (arr[i]<*min) 
         *min = arr[i]; 
    }  

    return *min; 
 }
};  

void zapol(int size, int *arr)
    {   
        std::cout<<"Enter your array\n"; 
        for (int i=0; i<size; ++i) 
        {
            std::cin>>arr[i]; 
        }
    } 
     
void zapol_rand(int size, int *arr)
    {   
        std::cout<<"Enter your array\n"; 
        for (int i=0; i<size; ++i) 
        {
            arr[i] = rand()%100-50; 
        }
    }  

int main(int argc, char const *argv[]) 
{ 
    srand(time(NULL)); 

    int arr[5] {1, 2, 3, 4, 5}; 
    Array<int> more(arr, 5);
    Algorithm<int * > alg;
    Algorithm<Array<int> > alg_arr;
    alg.print(arr, 5);
    alg_arr.print(more, more.getSize());

    double arr_1[7] {1.3, 2, 3.89, 4.0, 5.5, 0, 17.9  }; 
    Array<double> pore(arr_1, 7); 

}