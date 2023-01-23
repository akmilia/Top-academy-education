#include <iostream>
#include <string>

class User {
    std::string name;
    int age;
    int *array_o;
    int size;
    int cap; // size * 2

    public:
    User() {
        std::cout << "Input name: ";
        std::cin >> this->name;
        std::cout << "Input age: ";
        std::cin >> this->age;
    }
    User(const User &other) {
       this->name = other.name; 
       this->age = other.age;  

       this->array_o = new int[other.size];
       this->size = other.size;
        for (int i = 0; i < this->size; ++i) {
            this->array_o[i].setName(other.array_o[i].getName());
            this->array_o[i].setAge(other.array_o[i].getAge());
        }

    }
    User(std::string name, int age, int *arr, int size) {
        this->name = name; 
        this->age =age; 

        this->array_o = new int[size]; 
         for (int i = 0; i < this->size; ++i) { 
              this->array_o[i] = arr[i]; 
         } 
    }

    void print_data() {
        std::cout<<"Name"<<name
                 <<"Age"<<age
                 <<"Array\n";  
        for (int i=0; i<size; ++i) 
        std::cout<<array_o[i]; 
    }
    void print_avg_arr() {
        // вывести среднее значение arr 
        int * sum = new int{0}; 
        for (int i=0; i<this->size; ++i) 
        { sum+=array_o[i]; } 

        std::cout<<"Avg "<<sum/(this->size)<<std::endl; 
    }

    void add_to_arr(int val) {
        // добавить в конец arr 
        
    }
    void del_to_arr(int index) {
        // добавить в конец arr
    }

    std::string getName() { return this->name; }
    int getAge() { return this->age; }

    void setName(std::string name) { this->name = name; }
    void setAge(int age) { this->age = age; } 

    ~User() {  delete [] array_o}
};


class Data{
    User *users;
    int size;

    public:
    Data() : Data(1) {} 

    Data(const Data &other) {
        this->users = new User[other.size];
        this->size = other.size;
        for (int i = 0; i < this->size; ++i) {
            this->users[i].setName(other.users[i].getName());
            this->users[i].setAge(other.users[i].getAge());
        }
    }
    explicit Data(int count_users) {
        this->users = new User[count_users];
        this->size = count_users;
    }

    void print() {
        for (int i = 0; i < this->size; ++i) {
            this->users[i].print_data();
        }

    }

    ~Data() {
        delete [] this->users;
    }
};


int main(int argc, char const *argv[])
{
    Data test(3);
    test.print();
    return 0;
}