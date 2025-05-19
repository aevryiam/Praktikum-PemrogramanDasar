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
  double price;
  float page;
};
 
int main() {
struct Books Book1;        
struct Books Book2;
struct Books Book3;
struct Books Book4;
struct Books Book5;   

// book 1 specification
strcpy( Book1.title, "Cara Jago Main Valo");
strcpy( Book1.author, "Wikan");
strcpy( Book1.publisher, "terobietia");
strcpy( Book1.subject, "Hiburan");
Book1.year = 2023;
Book1.book_id = 03102006;
Book1.price = 100000;
Book1.page = 135;

// book 2 specification
strcpy( Book2.title, "FFKG EZ A");
strcpy( Book2.author, "Tutor FFKG");
strcpy( Book2.publisher, "Adkesma KMTETI");
strcpy( Book2.subject, "Edukasi");
Book2.year = 2024;
Book2.book_id = 10000000;
Book2.price = 500000;
Book2.page = 732;

// book 3 specification
strcpy( Book3.title, "Fenomena Buka Bersama saat Ramadan");
strcpy( Book3.author, "Roni sang Pengamat");
strcpy( Book3.publisher, "Gramedoa");
strcpy( Book3.subject, "Sosial dan Budaya");
Book3.year = 2020;
Book3.book_id = 01032020;
Book3.price = 65000;
Book3.page = 74;

// book 4 specification
strcpy( Book4.title, "Tidur");
strcpy( Book4.author, "Fransiscus");
strcpy( Book4.publisher, "Mandiri");
strcpy( Book4.subject, "Opini");
Book4.year = 2025;
Book4.book_id = 12032025;
Book4.price = 50000;
Book4.page = 37;

// book 5 specification
strcpy( Book5.title, "Sang Raja Jawa");
strcpy( Book5.author, "Mulyono");
strcpy( Book5.publisher, "Pemerintah Jawa");
strcpy( Book5.subject, "Opini");
Book5.year = 2024;
Book5.book_id = 01012024;
Book5.price = 235000;
Book5.page = 354;

// Print Book1 info
cout << "Book 1 title : " << Book1.title <<endl;
cout << "Book 1 author : " << Book1.author <<endl;
cout << "Book 1 publisher : " << Book1.publisher <<endl;
cout << "Book 1 subject : " << Book1.subject <<endl;
cout << "Book 1 year release : " << Book1.year <<endl;
cout << "Book 1 page : " << Book1.page <<endl;
cout << "Book 1 price : " << Book1.price <<endl;
cout << "Book 1 id : " << Book1.book_id <<endl;

// Print Book2 info
cout << "Book 2 title : " << Book2.title <<endl;
cout << "Book 2 author : " << Book2.author <<endl;
cout << "Book 2 publisher : " << Book2.publisher <<endl;
cout << "Book 2 subject : " << Book2.subject <<endl;
cout << "Book 2 page : " << Book2.page <<endl;
cout << "Book 2 price : " << Book2.price <<endl;
cout << "Book 2 year release : " << Book2.year <<endl;
cout << "Book 2 id : " << Book2.book_id <<endl;

// Print Book3 info
cout << "Book 3 title : " << Book3.title <<endl;
cout << "Book 3 author : " << Book3.author <<endl;
cout << "Book 3 publisher : " << Book3.publisher <<endl;
cout << "Book 3 subject : " << Book3.subject <<endl;
cout << "Book 3 year release : " << Book3.year <<endl;
cout << "Book 3 page : " << Book3.page <<endl;
cout << "Book 3 price : " << Book3.price <<endl;
cout << "Book 3 id : " << Book3.book_id <<endl;

// Print Book4 info
cout << "Book 4 title : " << Book4.title <<endl;
cout << "Book 4 author : " << Book4.author <<endl;
cout << "Book 4 publisher : " << Book4.publisher <<endl;
cout << "Book 4 subject : " << Book4.subject <<endl;
cout << "Book 4 year release : " << Book4.year <<endl;
cout << "Book 4 page : " << Book4.page <<endl;
cout << "Book 4 price : " << Book4.price <<endl;
cout << "Book 4 id : " << Book4.book_id <<endl;

// Print Book5 info
cout << "Book 5 title : " << Book5.title <<endl;
cout << "Book 5 author : " << Book5.author <<endl;
cout << "Book 5 publisher : " << Book5.publisher <<endl;
cout << "Book 5 subject : " << Book5.subject <<endl;
cout << "Book 5 year release : " << Book5.year <<endl;
cout << "Book 5 page : " << Book5.page <<endl;
cout << "Book 5 price : " << Book5.price <<endl;
cout << "Book 5 id : " << Book5.book_id <<endl;

return 0;
}