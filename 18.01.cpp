#include  <iostream>

class Array {
    int *arr; 
    int size;  
    int capasity; 

    public: 

explicit Array(int capasity){
    this->arr=new int [capasity];  
    this->capasity = capasity; 
    this-> size = 0; 
};   


void add_back(int val) 
{   
    if ((this->size+1) > this->capasity)
    std::cout<<"No: cap = "<<this->capasity<<" is too big\n"; 
    else
    { this->arr[size] = val; 
      size++; }
} 
void insert(int i, int val) 
{    
    if (i > this->capasity || i< 0)
    std::cout<<"No: cap = "<<this->capasity<<" is too big\n"; 
    else
    {  this->arr[i] = val; }  
    } 

void erase(int i)
{
    if (this->size<= i)
    std::cout<<"No: cap = "<<this->capasity<<" is too big\n"; //проверка
    else
    { for (int j=i; j<this->size; j++) //обеспечивает перебор всех элементов массива
    {
        this->arr[i-1] = this->arr[i]; 
    } 
        size--; 
    }
}

void print() 
{  
    std::cout<<"[  "; 
   for (int i = 0; i<size; i++) 
   std::cout<<this->arr[i]<<" , "; 
   std::cout<<" ] \n"; 
}   



~Array(){
    delete[] this->arr; 
}
 
Array &operator-(int i) //ориентируемся на знак после оператора, его ищет компилятор, но поведение ддля знакка мы прописываем сами
{  
    erase(i); 
   return *this; 
}

Array &operator+(int val) //ориентируемся на знак после оператора, его ищет компилятор, но поведение ддля знакка мы прописываем сами
{  
    add_back(val); 
   return *this; 
} 

bool operator<(const Array &other) 
{
    return this->size < other.size; 
} 

bool operator>(const Array &other) 
{
    return this->size > other.size; 
} 
bool operator>=(const Array &other) 
{
    return this->size >= other.size; 
}
bool operator<=(const Array &other) 
{
    return this->size <= other.size; 
} 

Array& operator-(const Array &other) 
{ 
    if (this->size< other.size) 
    {
        for (int j = 0 ; j < other.size - this->size; j++) 
        this->add_back(0);  

         for (int i=0; i< other.size; i++) 
      { 
          this->arr[i]-=other.arr[i]; 
      }
    } 
    else 
    { for (int i=0; i<this->size && i< other.size; i++) 
    {
        this->arr[i]-=other.arr[i];
    } }


} 
}; 

int main()
{
    Array arr(15); 
    Array arr1(10);

    arr.add_back(1); 
    arr.add_back(2); 
    arr.add_back(3); 
    arr.add_back(4);  

    arr.print(); 
     
    arr.insert(1, 22); 
    arr.print();   

    arr.erase(3);
     arr.print();  
    std::cout<<"\n";   
    
    arr + 5+6+9+10; 
    arr.print();  
    std::cout<<"\n";   
    
    arr1 + 1+2+3+10+5+7+4+9; 
    arr1.print();  
    std::cout<<"\n";

    arr - 2 -3- 7; 
    arr.print(); 
    std::cout<<"\n";  

   if ( arr > arr1) 
     std::cout<<"arr > arr1 \n"; 

    arr - arr1; 
    arr.print(); 

}