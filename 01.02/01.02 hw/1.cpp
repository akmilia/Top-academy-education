#include <iostream>
#include <string> 
#include <ctime> 
template <typename type> 
class Array
{
    private: 
    type* arr; 
    int size; 
    int cap; 


 public:   
    int getSize() 
    {return size; } 

    Array() 
    { 
        this->x=0; 
        this->y=0; 
    }  

    Array(const Array &other) : Array(other.arr, other.size) {}  

     /*Array &operator=(const Array &other)
    {   
        for (int i=0; i<this->size; i++) 
        {
        this->arr[i]=arr[i]; }
        return *this; 
    }  */

    Array(const type* arr, int size)
    {   
        this->cap=size*2;  
        this->arr=new type[this->cap]; 

        this->size=size; 

        for (int i =0; i < size ; ++i) 
        {
            this->arr[i]=arr[i]; 
        } 

    }    

    void zapol()
    {   
        std::cout<<"Enter your array\n"; 
        for (int i=0; i<this->size; ++i) 
        {
            std::cin>>(this->arr[i]); 
        }
    } 
     
     void zapol_rand()
    {   
        std::cout<<"Enter your array\n"; 
        for (int i=0; i<this->size; ++i) 
        {
            this->arr[i] = rand()%100; 
        }
    }  

    type max()
    {
       type max = this-> arr[0]; 
         for (int i=0; i<this->size; ++i) 
        {
            if (this->arr[i] >  max) 
            max = this->arr[i]; 
        } 
        return max; 
    }
     type min ()
    {
       type min  = this-> arr[0]; 
         for (int i=0; i<this->size; ++i) 
        {
            if (this->arr[i] >  min) 
            min = this->arr[i]; 
        } 
        return min; 
    }
    type &operator[] (int index) 
    {
        return this->arr[index]; 
    }  

    void add_back(type val) 
    {
        if (this->size+1 > this->cap ) 
        std::cout<<"You are trying to do an impossible stuff\n"; 
        else 
        {
            this-> arr[size] = val; 
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
    
    //1-st version, to be honest i dont like it
    void add_by_index(type val, int index) 
    {
       type * tmp = new type [this->size - index + 1 ];  
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

    void operator+(type val) 
    {
        for (int i=0; i<this->size; i++) 
        {
            arr[i]+=val; 
        }
    }
    
    void operator-(type val) 
    {
        for (int i=0; i<this->size; i++) 
        {
            arr[i]-=val; 
        }
    } 

    void operator*(type val) 
    {
        for (int i=0; i<this->size; i++) 
        {
           arr[i]*=val; 
        }
    } 
    void operator/(type val) 
    {
        for (int i=0; i<this->size; i++) 
        {
            arr[i]/=val; 
        }
    }
  
   ~Array()
   {
    delete [] arr; 
    }

};  

  


template<typename type> 
std::ostream &operator<< (std::ostream &out, Array<type> array)
{ 
    out<<" ( "; 
    for (int i=0; i< array.getSize(); ++i) 
    {
        out<<array[i]; 
        if (i!=array.getSize()-1) 
        out<<", "; 
    } 

    out<<" )" ;  

     return out; 
}  

int main(int argc, char const *argv[])
{
      srand(time(NULL)); 

        int arr[5] {1, 2, 3, 4, 5}; 
    Array<int> template_array(arr, 5); 

    template_array.add_back(9); 
    std::cout<<"+ 1 элемент на конце\n"; 
    std::cout<<template_array<<"\n\n"; 
     
    template_array.del_index(3); 
    std::cout<<"Элемент номер три должен сдо\n"; 
    std::cout<<template_array<<"\n\n";  

    template_array.add_by_index(78,  2);
    std::cout<<"На втором месте теперь стоит 78, а весь предыдущий массив, начиная с него, съехал на +1\n";  
    std::cout<<template_array<<"\n\n"; 
  
    std::cout<<"ВСЕ ЭЛЕМЕНТЫ  УВЕЛИЧИВАБТСЯ НА +10 \n"; 
    template_array+6; 
    std::cout<<template_array<<"\n\n";   

    
    std::cout<<"ВСЕ ЭЛЕМЕНТЫ УМЕНЬШАЮТСЯ 15 \n";
    template_array-10; 
    std::cout<<template_array<<"\n\n";  

} 

 


