#include <iostream> 
#include<string> 

class List
{   
    public:
    struct Node 
    {
    std::string val;
     Node* next;
     Node(std::string _val) : val(_val), next(nullptr){}
    }; 

    struct list 
    {
    Node* first;
    Node* last;

    list() : first(nullptr), last(nullptr) {} 

     bool is_empty() { return first == nullptr;} 

    void push_back(std::string _val) 
    {
    Node* p = new Node(_val);
   if (is_empty()) {
      first = p;
      last = p;
      return;
    }
    last->next = p;
    last = p;
   }  

    void print()
     {
        if (is_empty()) return;
        Node* p = first;
        while (p) {
            std::cout << p->val << " ";
            p = p->next;
        }
        std::cout << "\n";
    }
    }
};

int main() 
{
    List l;
    std::cout << l.is_empty() <<"\n";
    l.push_back("3");
    l.push_back("123");
    std::cout << l.is_empty() << "\n";
    l.print();
    return 0;
}
 
