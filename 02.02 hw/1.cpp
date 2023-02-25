#include <iostream>
#include <random>
#include <chrono>
using namespace std;
const int n=5; 
//перегрузка функции - когда мы пишем 1 и ту же фу-ию, но с разными аргументами
//т.е. пишется несколько функции для разных типов данных
//проблема с реализацией рандома - я нашла вариант, как его сделать
//но 1. числа какие-то неадекватные и скорее всего в связи с этим не работает поиск макс/мин

template <typename T> 
class Array 
{
   private:
   T *arr; 
   int zize; 
   int cap; 


   public:  
     Array() : Array (*arr, n) {}

    Array(const Array &other) : Array(other.arr, other.zize) {}

    Array(const T* arr, int zize)
    {   
        this->cap=zize*2;  
        this->zize=zize; 
        this->arr=new T[this->cap]; 

        for (int i =0; i < this->zize ; ++i) 
        {
            this->arr[i]=arr[i]; 
        } 

    }   
   

   void print_any_arr() const {
    for (int i=0; i<this->zize ; i++) {
       
           cout<<arr[i]<<"\t"; 
    }  
     cout<<"\n"; 
    }    

    // T init_arr () 
    // { 

    // for (int i=0; i<this->zize ; i++) {
    //        static std::mt19937 gen(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    // std::uniform_real_distribution<double> distribution(1, 10);
    // return distribution(gen);
    // }
    // }  
   

   T *init_arr () 
    { 

    for (int i=0; i<this->zize ; i++) {
           this->arr[i]= double(rand()%100- 50) ; 
          
    } 

    return this->arr; 
    }  


void find_max_min() 
{ 
    
    int max = this->arr[0]; 
    int min = this->arr[this->zize-1]; 
    
    for (int i=0; i<this->zize ; i++) {
           
                if (this->arr[i]> max) max=this->arr[i];
                if (this->arr[i]< min) min=this->arr[i];
          
       }   
    cout<<"Max = "<<max<< " Min = "<<min<<"\n"; 
} 

void qsortRecursive(T *a, const int n =5) {
    //Указатели в начало и в конец массива
    int i = 0;
    int j = n - 1;
    
    T mid = a[n/ 2];

    //Делим массив
    do {
        //Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
        //В левой части массива пропускаем(оставляем на месте) элементы, которые меньше центрального
        while(a[i] < mid) {
            i++;
        }
        //В правой части пропускаем элементы, которые больше центрального
        while(a[j] > mid) {
            j--;
        }

        //Меняем элементы местами
        if (i <= j) {
            T tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);


    //Рекурсивные вызовы, если осталось, что сортировать
    if(j > 0) {
        //"Левый кусок"
        qsortRecursive(a, j+1);
    }
    if (i < n) {
        //"Првый кусок" 
        qsortRecursive(&a[i], n-i);
    }
}

// void sort_stroki() 
// {   
//     for (int i=0; i<this->zize ; i++) 
//     {   
        
//         T *tmp =new T[n]; 
//         for (int j=0; j<this->zize ; j++) 
//         {
//          tmp[j]=arr[i][j];  
//         } 
        
//          qsortRecursive(tmp, n);  
         
//          for (int k=0; k<this->z                                                                                                                                        ize ; k++ )
//          {  
//             cout<<tmp[k]<<" \t";  
//          }
         
//           cout<<" \n"; 
//         delete tmp; 
//     }
//          cout<<"\n";  
//     }  

    void operator+(T val) 
    {
        for (int i=0; i<this->zize; i++) 
            this->arr[i]+=val; 
        
    } 

    void operator-(T val) 
    {
        for (int i=0; i<this->zize; i++) 
            this->arr[i]-=val; 
        
    } 


     int getzize() 
    {return zize; } 
    ~Array()
   {
    delete [] arr; 
    }
}; 

int main()
{   
    srand(time (NULL)); 

    // int n; 
    // std::cout<<"Enter the zizes "; cin>>n;  

    int arrint[n]; 
    double arrdoub [n]; 
    
    
    Array <int> arint(arrint, n ); 
    Array <double> ardb(arrdoub, n); 
    
    arint.init_arr(); 
    arint.print_any_arr(); 
    arint.find_max_min(); 
    arint + 20; 
    cout<<" \n"; 

    ardb.init_arr(); 
    ardb.print_any_arr(); 
    ardb.find_max_min(); 
    arint + 20; 

}