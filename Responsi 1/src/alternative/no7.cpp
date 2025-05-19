#include <iostream>
#include <string>
using namespace std;

const int MAX_MOVIES = 5;

struct movies_t {
    string title;
    string genre;
    int years;
} film[MAX_MOVIES];

void inputMoviesData(movies_t movies[], int size); // Function prototype
void displayMoviesData(movies_t movies[], int size); // Function prototype

int main() {
    cout << "\nEnter your 5 favorite movies: \n";
    inputMoviesData(film, MAX_MOVIES); // Function call

    cout << "\nYou have entered the movies: \n";
    displayMoviesData(film, MAX_MOVIES); // Function call
    
    return 0;
}

void inputMoviesData(movies_t movies[], int size) { // Function implementation
    for (int n = 0; n < size; n++) {
        cout << "Enter film title " << (n + 1) << ": ";
        cin.ignore(); // To clear the newline character from the input buffer
        getline(cin, movies[n].title);
        
        cout << "Enter film genre " << (n + 1) << ": ";
        getline(cin, movies[n].genre);
        
        cout << "Enter film year " << (n + 1) << ": ";
        cin >> movies[n].years;
    }
}

void displayMoviesData(movies_t movies[], int size) { // Function implementation
    for (int n = 0; n < size; n++) {
        cout << n + 1 << ". " << movies[n].title;
        cout << ", " << movies[n].genre;
        cout << " (" << movies[n].years << ")\n";
    }
}
