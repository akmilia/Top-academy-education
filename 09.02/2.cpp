#include <iostream> 
#include <list>
#include<string> 
// я без понятия сейчас как это сделать

// template <typename T>
//  struct Node 
//     {
//      T val;
//      Node* next;
//      Node(T val) : val(val), next(nullptr){}
//     }; 
template <class T>
class List
{   
    private: 
    
    struct Node 
    {
     T val;
     Node* next;
     Node(T val) : val(val), next(nullptr){}
    }; 
    
     Node* begin;
     Node* end;
    int count; 

    public:
    List() : begin(nullptr), end(nullptr), count(0) {} 
    List (const List &other ) {} 

    List (int count, T val)
   {
       this->count=0; 
       int tmp =count; 
       while (tmp!=0) 
       { 
        add_end(val);
        --tmp; 
       }
   } 
    
    //the condition of insert
    bool is_empty() { return begin == nullptr;} 

    T &get_index(int index)
   {  
    Node*i = begin; 
      while (*(i->next)!= index) 
      { 
          i = i->next; 
      } 
      return *i; 
   }
  void add_end(const T &val) {
        if (begin == nullptr) {
            begin = new Node {val, nullptr};
        } else {
            Node *i = begin;
            while (i->next != nullptr) {
                i = i->next;
            }
            i->next = new Node {val, nullptr};
        }
        this->count += 1;
    } 
    
    void push_back(T val) 
    {
   Node*p = new Node(); 
    p = val;
    p->next = nullptr; 

    if (is_empty()) 
    {
      begin = p;
      end = p;
      return;
    }
    else 
    {
      end->next = p;
      end = p;  
    }
    count++;
   }  
   void push_front(T val) 
   {    
        Node* i = begin; 
        Node* tmp = new Node{val, nullptr}; 
        tmp->next = begin; 
        begin = tmp;
    this->count +=1; 
   }
    void del(int index)
  { 

    if (is_empty) std::cout<<"Nothing to delete!!/n"; 
     else 
     { 
         if (index == 0)
        {
      // 3.1. Если удаляется первый элемент
      Node<T>* t = begin; // запомнить адрес первого элемента
      begin = begin->next; // перейти на следующий элемент
      delete t; // освободить первый элемент
        } 
        else
        {
      // 3.2. Если удаляется не первый элемент.

      // 3.2.1. Перейти на элемент в позиции index-1
      Node<T>* t = get_index(index - 1);

      // 3.2.2. Запомнить удаляемый элемент
      Node<T>* t2 = t->next;

      // 3.2.3. Установить следующий элемент для элемента в позиции index-1
      t->next = t2->next; // работает корректно даже для последнего элемента

      // 3.2.4. Удалить элемент на который указывает t2
      delete t2;
       }
      count--;
     }
  
  }


    // void print()
    //  {
    //     if (is_empty()) return;
    //     Node* p = begin;
    //     while (p) {
    //         std::cout << p->val << " ";
    //         p = p->next;
    //     }
    //     std::cout << "\n";
    // } 
    
     void print() {
        for (Node *i = begin; i != nullptr; i = i->next) {
            std::cout << i->val << " ";
        }
        std::cout << "\n";
    } 

    void print_list(const List &List) 
    {   
    std::cout << "count list " << list.count() << "\n";

    for (std::list <int>:: const_iterator i = list.begin(); 
    i!=list.end(); 
    ++i)  
    { 
        std::cout<<*i<<" \n"; 
    } 
    } 

    void Clear()
  { int i=0;
    while (begin != nullptr)
     {
        del(i);
        i++;
     } 
  } 

  ~List( ) { Clear(); }
};

int main() 
{
    List<int> l(3, 10);
    // l.push_back(3);
    // l.push_front(899);
    l.print();
    return 0;
}
 
