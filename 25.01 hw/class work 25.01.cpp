#include <iostream> 

class Point 
{
    private: 
    int x; 
    int y;  

    public:

    Point(){} 

    Point(const Point &other) : Point (other.x, other.y) {} 

    Point(int x, int y) 
    {
        this->x=x; 
        this->y=y; 
    } 

    Point &operator=(const Point &other)
    { 
        this->x=other.x; 
        this->y=other.y;  
        return *this; 
    }  

    Point operator+(int val) const
    {
        return Point(this->x +val, this->y + val);
    }

    /*Point &operator+(const Point &other)
    {
        this->x=this->x + other.x; 
        this->y=this->y + other.y; 
        return *this; 
    } */ 
    Point operator+(const Point &other) const
    { 
        return Point(this->x +other.x, this->y + other.y);  
    }

    int getX() const
    { 
         return this->x; 
    }
    
    int getY() const
    { 
         return this->y; 
    }
    
};  

std::ostream &operator<< (std::ostream &out, const Point&point)
{ 
     std::cout<<" ( "<<point.getX()<<", "<<point.getY()<<" )\n";  

     return out; 
}  


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

    void print() 
    {
        std::cout<<"[ "; 
        for (int i=0; i<this->size; ++i)
        {
            std::cout<<this->arr[i]; 
            if (i!=size -1)
            {
                std::cout<<" , ";             }
        }
    }

    type &operator[] (int index) 
    {
        return this->arr[index]; 
    } 

  
   ~Array()
   {
    delete [] arr; 
    }

};   

template<typename type> 
std::ostream &operator<< (std::ostream &out, const Array<type> &array)
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


template <typename T> 
void print_any( T val) 
{
    std::cout<<val+val<<"\n"; 

} 
/*void print_any(const T& val) 
{
    std::cout<<val<<"\n"; 

}
*/ 

int main(int argc, char const *argv[]) 
{ 
    Point a (6, 5); 
    Point b (4, 1); 

    a=a+b; 
    std::cout<<a<<"\n";  
    
    Point points[3] {Point(1, 2), Point(4, 7), Point(3, 9)}; 
    int arr[5] {1, 2, 3, 4, 5}; 

    Array<int> template_array(arr, 5); 
    Array<Point> templatep_array(points, 5); 
     
     template_array.print(); 
    
    return 0;  
} 
