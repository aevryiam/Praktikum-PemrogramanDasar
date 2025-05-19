#include <iostream>
#include <cstring>
using namespace std;
struct Books {
  char title[50];
  char author[50];
  char publisher[50];
  char subject[100];
  int year;
  int book_id;
};
 
int main() {
struct Books Book1; // Declare Book1 of type Book        
struct Books Book2; // Declare Book2 of type Book    

// book 1 specification
strcpy( Book1.title, "Learn C++ Programming");
strcpy( Book1.author, "Chand Miyan");
strcpy( Book1.publisher, "Gramedia");
strcpy( Book1.subject, "C++ Programming");
Book1.year = 2012;
Book1.book_id = 6495407;

// book 2 specification
strcpy( Book2.title, "Telecom Billing");
strcpy( Book2.author, "Yakit Singha");
strcpy( Book2.publisher, "PT Telkom");
strcpy( Book2.subject, "Telecom");
Book2.year = 2018;
Book2.book_id = 6495700;

// Print Book1 info
cout << "Book 1 title : " << Book1.title <<endl;
cout << "Book 1 author : " << Book1.author <<endl;
cout << "Book 1 publisher : " << Book1.publisher <<endl;
cout << "Book 1 subject : " << Book1.subject <<endl;
cout << "Book 1 year release : " << Book1.year <<endl;
cout << "Book 1 id : " << Book1.book_id <<endl;

// Print Book2 info
cout << "Book 2 title : " << Book2.title <<endl;
cout << "Book 2 author : " << Book2.author <<endl;
cout << "Book 2 publisher : " << Book2.publisher <<endl;
cout << "Book 2 subject : " << Book2.subject <<endl;
cout << "Book 2 year release : " << Book2.year <<endl;
cout << "Book 2 id : " << Book2.book_id <<endl;
return 0;
 }