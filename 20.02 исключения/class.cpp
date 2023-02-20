#include <iostream> 
#include <vector> 
#include <ctime> 
#include <algorithm> 

//enter the element
int input_n() 
{ 
    int n; 
    std::cout<<"\n  Enter the number ";   std::cin>>n;  
    return n; 
}

//while it works correctly  return pos number 
// in case of any mistakes it will return neg
int print_n() {

    int n = input_n();

    if (n >= 10 && n <= 15) {
        std::cout << n << "\n";
    } else {
        throw "Число должно быть от 10 до 15!";
    }

    return n;
}

void print__all_del(int n) 
{ 
   std::cout<<" dels \n";  
   for (int i=2; i<=n/2; ++i) 
    { 
        if (n%i ==0) 
        std::cout<<i<<" "; 
    } 
    std::cout<<"\n"; 
}  

void ost(int n)
{
    int m =input_n(); 
    if (m==0) throw "Mistake \n"; else std::cout<<"Ost is "<<n%m<<"\n"; 
} 

void full_arr(std::vector<int>* array) 
{ 
    for (int i=0; i< array->size(); ++i) 
    {   array->at(i) = random()%100 - 38; } 
} 

void print_arr( const std::vector<int>* array)
{   
    std::cout<<"The vector\n"; 
    for (int i=0; i< array->size(); ++i) 
    {   std::cout<<array->at(i) <<" ";  }  
    std::cout<<"\n";
} 
 
void del_by_val(std::vector<int>* array, int val)  
{   
    int tmp=0; 
    for (int i=0; i< array->size(); ++i) 
    {  if (array->at(i) == val)  
        tmp = i; 
      }  

    if (tmp!=0) 
    array->erase(tmp); 
    else throw "No such element!\n"; 
    
}
 

void choose_com(std::vector<int>* array)
{ 
    int v;  

    std::cout << "Выберите команду \n";
    std::cout << "1. Все делители \n";
    std::cout << "2. Остаток от деления \n";
    std::cout << "3. Вывод массива \n";
    std::cout << "4. Поиск элемена \n";
    std::cout << "5. Удаление элемента  по значению \n";
    std::cout << "6. Удаление элемента  по индексу \n";
    std::cout << "-1. Выход \n";
    std::cout << " : ";

    std::cin>>v;  


    switch (v)
    {
    case 1: 
        for (int i=0; i< array->size(); ++i) 
    {   print__all_del(array->at(i));  
        std::cout<<"\n";   }
       
        break;
    case 2: 
        for (int i=0; i< array->size(); ++i) 
    {   ost(array->at(i));  
        std::cout<<"\n";   }
        break;
    case 3: 
        print_arr(array); 
        break;
    case 4: 
        
        break;
    case 5: 
        
        break;
    case 6: 
        
        break;
    case -1: 
      
        break;

    default:  
        false; 
        break;
    }
}

int main() 
{   
     srand(time (NULL)); 
    //   int *array;
      int n = print_n();
    //   array = new int[n]; 

    std::vector <int> array(n); 
    array.at(1) = 5;  // изменили значение второго элемента
 

    while (true) 
        { 
    try {  
               full_arr(&array); // заполнение массива // ошибка при неверном размере

             choose_com(&array); 
        } 
         catch (const char*  error) 
    { 
        std::cout<<"Mistake   \n"; 
        std::cout<<error; 
    }
    }  

    std::cout << "End!!\n";
} 

