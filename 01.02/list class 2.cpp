#include <iostream> 
#include <list> 

template <typename T> 
class List 
{ 
   struct node {
      T val; 
      node *next; 
   };  

   node * head;
   int size;
public:
   List () {} 
   List (const List &other ) {} 

   List (int size, T val)
   {
       this->size=0; 
       int tmp =size; 
       while (tmp!=0) 
       { 
        add_end(val);
        --tmp; 
       }
   } 

   void print_list ( ) 
   { 
    for (node *i = head; i!=nullptr; i=i->next) 
    {
        std::cout<<i->val<<" "; 
    } 
    std::cout<<"\n"; 
   }
   
   void add_end(const T &val) 
   {
    if (head == nullptr) 
    { 
        head = new node {val, nullptr}; 
    } 
    else 
    {
        node*i = head; 
        while (i->next != nullptr) 
        { 
            i = i->next; 
        } 

        i->next = new node{val, nullptr}; 
    } 
    this->size +=1; 
   } 

   void add_begin(T val) 
   {    

    
        // tmp
        // head->next->next->null

        node* i = head; 
        node* tmp = new node{val, nullptr}; 
        tmp->next = head; 
        // tmp->(head)next->next->next->null
        head = tmp;
        // (head)tmp->next->next->next->null

        // tmp
        // head->next->next->null

    this->size +=1; 
   }

   T &get_index(int index)
   {  
    node*i = head; 
      while (i->next != index) 
      { 
          i = i->next; 
      } 

      return i; 
   }
}; 


void print_list(const std::list <int> &list) 
{   
    std::cout << "Size list " << list.size() << "\n";

    for (std::list <int>:: const_iterator i = list.begin(); 
    i!=list.end(); 
    ++i)  
    { 
        std::cout<<*i<<" \n"; 
    } 

}
int main() 
{
    //std::list <int> test_list(3, 6); 
    //print_list(test_list);  

    List<int> my_list(7, 4);
    my_list.print_list(); 

    my_list.get_index(2); 
    std::cout<<"\n"; 
    my_list.add_begin(8); 
    return 0; 
}