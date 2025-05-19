#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct BOOKS {
    string bookName;
    string authorName;
    int year;
    long cost;
};

BOOKS book[5];

void getData(); 
bool compareBooks(BOOKS a, BOOKS b); 
void showData(); 

int main() {
    cout << "============= MY Favorite Books =============" << '\n';
    cout << "\n=> Enter your Five Favorite book details:" << '\n';
    getData(); 
    sort(book, book + 5, compareBooks); 
    showData(); 
    return 0;
}

void getData() { 
    for (int i = 0; i < 5; i++) {
        cout << "Enter Name of the Book: ";
        cin >> book[i].bookName;
        cout << "Enter Author Name of the Book: ";
        cin >> book[i].authorName;
        cout << "Enter Published Year of the Book: ";
        cin >> book[i].year;
        cout << "Enter Cost of the Book: ";
        cin >> book[i].cost;
    }
}

void showData() { 
    cout << "\n\n============= Favorite Books Record =============" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << ") Book Name: " << book[i].bookName << " (" << book[i].year << ")" << endl;
        cout << "   Author Name: " << book[i].authorName << endl;
        cout << "   Book Cost: " << book[i].cost << endl;
        cout << "\n";
    }
}

bool compareBooks(BOOKS a, BOOKS b) { 
    return a.cost < b.cost;
}
