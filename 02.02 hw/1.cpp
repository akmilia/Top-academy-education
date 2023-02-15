#include <iostream>
using namespace std;
const int n=5; 
//перегрузка функции - когда мы пишем 1 и ту же фу-ию, но с разными аргументами
//т.е. пишется несколько функции для разных типов данных
//done хуядан - тебя слово класс в задании  не смущает  

template <typename T> 
class Array 
{
   private:
   T *arr; 
   int zize; 
   int cap; 


   public: 
   

   void print_any_arr(T arr[]) {
    for (int i=0; i<this->zize ; i++) {
       
           cout<<arr[i][j]<<"\t"; 
    }  
     cout<<"\n"; 
    }    

    void init_arr (T arr[]) 
    {
    for (int i=0; i<this->zize ; i++) {
           arr[i][j]= rand()% 100; 
       }   
    } 


void find_max_min(T arr[]) 
{ 
    
    int max = arr[0]; 
    int min = arr[this->zize-1]; 
    
    for (int i=0; i<this->zize ; i++) {
        for (int j=0;  j<n; j++) { 
            if (i==j) 
            {
                if (arr[i]> max) max=arr[i];
                if (arr[i]< min) min=arr[i];
            }
       }   
    } 
    cout<<"Max = "<<max<< " Min = "<<min<<"\n"; 
} 

void qsortRecursive(T *a, int n) {
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
            Type tmp = a[i];
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

void sort_stroki(T a[][n]) 
{   
    for (int i=0; i<n ; i++) 
    {   
        
        T *tmp =new T[n]; 
        for (int j=0; j<n; j++) 
        {
         tmp[j]=a[i][j];  
        } 
        
         qsortRecursive(tmp, n);  
         
         for (int k=0; k<n; k++ )
         {  
            cout<<tmp[k]<<" \t";  
         }
         
          cout<<" \n"; 
        delete tmp; 
    }
         cout<<"\n";  
    } 
    
}; 

int main()
{   
    srand(time (NULL)); 
    int arrint[n][n]; 
    double arrdoub [n][n]; 
    char arrchar [n][n]; 
    
    init_arr(arrint); 
    print_any_arr(arrint);  
    cout<<"\n"; 
    
    init_arr(arrdoub); 
    print_any_arr(arrdoub); 
    cout<<"\n"; 
    
    init_arr(arrchar); 
    print_any_arr(arrchar); 
    cout<<"\n"; 
    
    find_max_min(arrint); 
    find_max_min(arrdoub); 
    find_max_min(arrchar); 
    
    cout<<"Sorted arrays int, double, char \n"; 
    sort_stroki(arrint); 
    sort_stroki(arrdoub);  
    sort_stroki(arrchar);
    
    return 0;
}