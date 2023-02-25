#include <iostream> 
#include <list>

class List
{   
    private: 
    
    struct Node 
    {
     int val;
     Node* next;
     Node(int val) : val(val), next(nullptr){}
    }; 
    
     Node* begin;
     Node* end;
    int count; 

    public:
    List() : begin(nullptr), end(nullptr), count(0) {} 
    List (const List &other ) {} 

    List (int count,  int val)
   {
       this->count=0; 
       int tmp =count; 
       while (tmp!=0) 
       { 
        add_end(val);
        --tmp; 
       }
   } 
    
    bool is_empty() { return begin == nullptr;} 

    int &get_index(const int index) 
   {  
    Node*i = begin; 
      while (*(i->next)!= index) 
      { 
          i = i->next; 
      } 
      return *i; 
   }
  void add_end(const int &val) {
        if (begin == nullptr) {
            begin = new Node {val, nullptr};
        } else {
            Node *i = begin;
            while (i->next != nullptr) {
                i = i->next;
            }
            i->next = new Node(val, nullptr){};
        }
        this->count += 1;
    } 
    
    void push_back(int val) 
    {
   Node*p = new Node(val, nullptr); 

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
   void push_front(int val) 
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
      Node* t = begin; // запомнить адрес первого элемента
      begin = begin->next; // перейти на следующий элемент
      delete t; // освободить первый элемент
        } 
        else
        {
      // 3.2. Если удаляется не первый элемент.

      // 3.2.1. Перейти на элемент в позиции index-1
      Node* t = get_index(index - 1);

      // 3.2.2. Запомнить удаляемый элемент
      Node* t2 = t->next;

      // 3.2.3. Установить следующий элемент для элемента в позиции index-1
      t->next = t2->next; // работает корректно даже для последнего элемента

      // 3.2.4. Удалить элемент на который указывает t2
      delete t2;
       }
      count--;
     }
  
  }
     void print() {
        for (Node *i = begin; i != nullptr; i = i->next) {
            std::cout << i->val << " ";
        }
        std::cout << "\n";
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
    List l(3, 10);
    // l.push_back(3);
    // l.push_front(899);
    l.print();
    return 0;
}
 
