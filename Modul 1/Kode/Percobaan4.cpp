#include <iostream> 
using namespace std; 
 
int main () 
{ 
  int Firstvalue = 5, Secondvalue = 15; 
  int * p1, * p2; 
 
  p1 = &Firstvalue; // p1 = address of firstvalue 
  p2 = &Secondvalue;  // p2 = address of secondvalue 
  *p1 = 10;            // value pointed to by p1 = 10 
  *p2 = *p1;            // value pointed to by p2 = value pointed to by p1 
  p1 = p2;             // p1 = p2 (value of pointer is copied) 
  *p1 = 20;  // value pointed to by p1 = 20 
   
  cout << "firstvalue is " << Firstvalue << '\n'; 
  cout << "secondvalue is " << Secondvalue << '\n'; 
  return 0; 
} 