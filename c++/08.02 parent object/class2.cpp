#include <iostream> 
#include <string>
#include <fstream>

class Calc
{
   protected: 
   double a; 

   public: 

    virtual  void sum(double *a, double *b) 
    { 
       std::cout<<"Sum = "<<*a+*b<<"\n"; 
    } 
    virtual  void dif(double *a, double *b) 
    { 
       std::cout<<"Dif = "<<*a-*b<<"\n"; 
    } 

    ~Calc() 
    { 
        std::cout<<"The lifetime of the variable has passed\n"; 
    }

}; 

class SuperCalc : public Calc
{  
     private: 
   std::string last_operation; 
   public:  

   std::string str; 
   void mult(double *a, double *b) 
   {
    std::cout<<"Mult = "<<(*a)*(*b)<<"\n"; 
   } 

   void div(double *a, double *b) 
   { 
    if (b!=0) 
    std::cout<<"Div = "<<(*a)/(*b)<<"\n";  
    str = std::to_string(*a) + "/" + std::to_string(*b); 
       this->last_operation = str;  
   } 

    std::string getLastOperation() {
        return this->last_operation; } 

};   

class SaveToFile : public SuperCalc
{ 
    public: 
  void save(std::string class2_dop) 
  { 
   std::ofstream fout; 

   fout.open(class2_dop); 

   if (fout.is_open()) 
   { 
        fout<<getLastOperation(); 
    } 
   else std::cout<<"The file curently is not open\n"; 
  }
   
};  

class SaveCalc: public Calc
{  
    private: 
   std::string last_operation; 

   public: 
   std::string str; 
   
     void sum(double *a, double *b) 
    { 
       std::cout<<"Sum = "<<*a+*b<<"\n"; 
       str = std::to_string(*a) + "+" + std::to_string(*b); 
       this->last_operation = str;  
    } 
    void dif(double *a, double *b) 
    { 
       std::cout<<"Dif = "<<*a-*b<<"\n"; 
       str = std::to_string(*a) + "-" + std::to_string(*b);
      this->last_operation = str;  
    }   

     std::string getLastOperation() {
        return this->last_operation; } 

   ~SaveCalc() {}
}; 

int main() 
{ 
  
   Calc def_calc;
    SuperCalc super_calc;
    SaveCalc save_calc; 

    double e, k, l, m, n; 
    std::cin>>e>>k>>l>>m>>n;  

    def_calc.dif(&e, &e);
    def_calc.sum(&e, &k);

    super_calc.dif(&l, &n);
    super_calc.dif(&m, &k);
    super_calc.mult(&e, &l);
    super_calc.div(&n, &m);

    save_calc.dif(&k, &n);
    save_calc.sum(&m, &e);
    std::cout <<"The last operation is "<< save_calc.getLastOperation() << "\n"; 

    SaveToFile save_file; 
    std::string class2_dop; 
    save_file.save(class2_dop);  
}