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

BOOKS book[5]; // Array of BOOKS structure

void getData(); // Function prototype
bool compareBooks(BOOKS a, BOOKS b); // Function prototype
void showData(); // Function prototype

int main() {
    cout << "============= MY Favorite Books =============" << '\n';
    cout << "\n=> Enter your Five Favorite book details:" << '\n';
    getData(); // Function call
    sort(book, book + 5, compareBooks); // Using std::sort to sort the books
    showData(); // Function call
    return 0;
}

void getData() { // Function implementation
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

void showData() { // Function implementation
    cout << "\n\n============= Favorite Books Record =============" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << ") Book Name: " << book[i].bookName << " (" << book[i].year << ")" << endl;
        cout << "   Author Name: " << book[i].authorName << endl;
        cout << "   Book Cost: " << book[i].cost << endl;
        cout << "\n";
    }
}

bool compareBooks(BOOKS a, BOOKS b) { // Function implementation
    return a.cost < b.cost;
}
