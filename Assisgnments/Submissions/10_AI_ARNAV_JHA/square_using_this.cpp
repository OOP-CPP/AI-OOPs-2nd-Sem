#include<iostream> 
using namespace std; 
  
class Demo
{ 
private: 
   int x; 
public: 
   void squarex (int x) 
   { 
       // The 'this' pointer is used to retrieve the object's x 
       // hidden by the local variable 'x' 
       this->x = x*x; 
   } 
   void print() { cout << "x = " << x << endl; } 
}; 
  
int main() 
{ 
   Demo obj; 
   int x = 20; 
   obj.squarex(x); 
   obj.print(); 
   return 0; 
} 