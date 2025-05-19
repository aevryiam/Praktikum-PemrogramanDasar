#include <iostream>
#include <string>
#include <array>

using namespace std;

const int MAX_MOVIES = 5;

struct Movie {
    string title;
    string genre;
    int year;
};

using MovieArray = array<Movie, MAX_MOVIES>;

void inputMoviesData(MovieArray& movies);             
void displayMoviesData(const MovieArray& movies);      

int main() {
    MovieArray favoriteMovies;

    cout << "\nEnter your 5 favorite movies:\n";
    inputMoviesData(favoriteMovies);

    cout << "\nYou have entered the movies:\n";
    displayMoviesData(favoriteMovies);

    return 0;
}

void inputMoviesData(MovieArray& movies) {
    cin.ignore(); 
    for (int i = 0; i < MAX_MOVIES; ++i) {
        cout << "Enter film title " << (i + 1) << ": ";
        getline(cin, movies[i].title);

        cout << "Enter film genre " << (i + 1) << ": ";
        getline(cin, movies[i].genre);

        cout << "Enter film year " << (i + 1) << ": ";
        cin >> movies[i].year;
        cin.ignore();
    }
}

void displayMoviesData(const MovieArray& movies) {
    for (int i = 0; i < MAX_MOVIES; ++i) {
        cout << (i + 1) << ". " << movies[i].title
             << ", " << movies[i].genre<< " (" << movies[i].year << ")\n";
    }
}