#include <iostream> 
 
class Point2D
{ 
   private: 
   int x; 
   int y; 

   public:  
   
   Point2D() : Point2D (0, 0) {}  

   Point2D(int xP, int yP) : x{xP}, y  { yP} {}
   Point2D(const Point2D& other) 
   { 
      this->x= other.x; 
      this->y= other.y; 
   } 

   /*Point2D(int x, int y) 
   { 
      this->x=x; 
      this->y=y; 
   } */

   void setX(int x) 
   { 
    this->x = x; 
   } 

   int operator+(int x) 
   { 
     return this->x += x, 
            this->y += x;
   } 

   void setY(int y) 
   { 
    this->y = y; 
   } 

   void print() 
   { 
    std::cout<<"("<<this->x<<" , "<<this->y<<" )"; 
   }

   int getX()  const
   { return this->x; }

 int getY() const
   { return this->y; }
   ~Point2D() {}

};   

class Circle 
{ 
   Point2D cen_point; 
   double rad; 
    
   public: 

   Circle () : Circle (Point2D (0, 0), 1) {} 
   Circle (Point2D cen_point, double rad) 
   { 
      this->cen_point.setX(cen_point.getX()); 
      this->cen_point.setY(cen_point.getY());  
      this->rad = rad; 
   }   

   double getRad() const 
   { 
      return rad; 
   } 

   

}; 


int main() 
{ 
  Point2D kor(5, 7);
  kor.print(); 
  
Circle one (kor, 25); 
Circle two (Point2D(25, 25), 25);

}