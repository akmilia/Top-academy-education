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

    void setX(int val) 
    {
        this->x=val; 
    } 

    void setY(int val) 
    {
        this->y=val; 
    }
    
};  

std::ostream &operator<< (std::ostream &out, const Point&point)
{ 
     std::cout<<" ( "<<point.getX()<<", "<<point.getY()<<" )";  

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

   /* void print() 
    {
        std::cout<<"[ "; 
        for (int i=0; i<this->size; ++i)
        {
            std::cout<<this->arr[i]; 
            if (i!=size -1)
            {
                std::cout<<" , ";             }
        }
    } */

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

    void plus_all(type val)
    {
        for (int i=0; i<this->size; i++) 
        {
            arr[i].setX(arr[i].getX() + val.getX()); 
            arr[i].setY(arr[i].getY() + val.getY());
        }
    }  

    void operator+(type val) 
    {
        for (int i=0; i<this->size; i++) 
        {
            arr[i].setX(arr[i].getX() + val.getX()); 
            arr[i].setY(arr[i].getY() + val.getY());
        }
    }
    
    void minus_all(type val)
    {
        for (int i=0; i<this->size; i++) 
        {
            arr[i].setX(arr[i].getX() - val.getX()); 
            arr[i].setY(arr[i].getY() - val.getY());
        }
    }  

    void operator-(type val) 
    {
        for (int i=0; i<this->size; i++) 
        {
            arr[i].setX(arr[i].getX() - val.getX()); 
            arr[i].setY(arr[i].getY() - val.getY());
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
    /*Point a (6, 5); 
    Point b (4, 1); 

    a=a+b; 
    std::cout<<a<<"\n";  */
    
    Point points[3] {Point(1, 2), Point(4, 7), Point(3, 9)};  

     /*int arr[5] {1, 2, 3, 4, 5}; 
    Array<int> template_array(arr, 5); */ 

    Array<Point> templatep_array(points, 3); 

    templatep_array.add_back(Point(8, 11)); 
    std::cout<<"+ 1 элемент на конце\n"; 
    std::cout<<templatep_array<<"\n\n"; 
     
    templatep_array.del_index(3); 
    std::cout<<"Элемент номер три должен сдо\n"; 
    std::cout<<templatep_array<<"\n\n";  

    templatep_array.add_by_index(Point(9, 7), 2);
    std::cout<<"На втором месте теперь стоит Point(9, 7), а весь предыдущий массив, начиная с него, съехал на +1\n";  
    std::cout<<templatep_array<<"\n\n"; 
  
    templatep_array.plus_all(Point(10, 10));
    std::cout<<"ВСЕ ЭЛЕМЕНТЫ ПО ВСЕМ ПАРАМЕТРАМ УВЕЛИЧИВАБТСЯ НА +10 \n"; 
    std::cout<<templatep_array<<"\n\n";  

    templatep_array+Point(5, 5); 
    std::cout<<templatep_array<<"\n\n";   

    templatep_array.minus_all(Point(15, 15));
    std::cout<<"ВСЕ ЭЛЕМЕНТЫ ПО ВСЕМ ПАРАМЕТРАМ УМЕНЬШАЮТСЯ 15 \n"; 
    std::cout<<templatep_array<<"\n\n";  

    templatep_array-Point(5, 5); 
    std::cout<<templatep_array<<"\n\n";  


    return 0;  
} 
