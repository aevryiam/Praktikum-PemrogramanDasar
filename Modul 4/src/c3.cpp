#include <iostream>
#include <cstring>
using namespace std;
 
union FilmData {
    char title[50];
    char genre[20];
    char language[20];
    int release_year;
    double imdb_rating;
};
 
struct Film {
    FilmData title;
    FilmData genre;
    FilmData language;
    FilmData release_year;
    FilmData imdb_rating;
};
 
int main() {
    Film movie1, movie2, movie3;
 
    // Movie 1 specification
    strcpy(movie1.title.title, "KKN di Desa Penari");
    strcpy(movie1.genre.genre, "Horror");
    strcpy(movie1.language.language, "Bahasa Indonesia");
    movie1.release_year.release_year = 2023;
    movie1.imdb_rating.imdb_rating = 5.9;
 
    // Movie 2 specification
    strcpy(movie2.title.title, "Sewu Dino");
    strcpy(movie2.genre.genre, "Horror");
    strcpy(movie2.language.language, "Bahasa Indonesia");
    movie2.release_year.release_year = 2023;
    movie2.imdb_rating.imdb_rating = 8.5;
 
    // Movie 3 specification
    strcpy(movie3.title.title, "Angry Birds");
    strcpy(movie3.genre.genre, "Animation");
    strcpy(movie3.language.language, "Bahasa Inggris");
    movie3.release_year.release_year = 2015;
    movie3.imdb_rating.imdb_rating = 9.1;
 
    // Print movie info
    cout << "\n===== Film 1 Information =====\n";
    cout << "Title       : " << movie1.title.title << endl;
    cout << "Genre       : " << movie1.genre.genre << endl;
    cout << "Language    : " << movie1.language.language << endl;
    cout << "Year        : " << movie1.release_year.release_year << endl;
    cout << "IMDB Rating : " << movie1.imdb_rating.imdb_rating << endl;
 
    cout << "\n===== Film 2 Information =====\n";
    cout << "Title       : " << movie2.title.title << endl;
    cout << "Genre       : " << movie2.genre.genre << endl;
    cout << "Language    : " << movie2.language.language << endl;
    cout << "Year        : " << movie2.release_year.release_year << endl;
    cout << "IMDB Rating : " << movie2.imdb_rating.imdb_rating << endl;
 
    cout << "\n===== Film 3 Information =====\n";
    cout << "Title       : " << movie3.title.title << endl;
    cout << "Genre       : " << movie3.genre.genre << endl;
    cout << "Language    : " << movie3.language.language << endl;
    cout << "Year        : " << movie3.release_year.release_year << endl;
    cout << "IMDB Rating : " << movie3.imdb_rating.imdb_rating << endl;
	cout << "\n===== Size Information =====\n";
    cout << "Size of FilmData (union): " << sizeof(FilmData) << " bytes\n";
    cout << "Size of each element in FilmData:\n";
    cout << " Size of title       : " << sizeof(movie1.title) << " bytes\n";
    cout << " Size of genre       : " << sizeof(movie1.genre) << " bytes\n";
    cout << " Size of language    : " << sizeof(movie1.language) << " bytes\n";
    cout << " Size of release_year: " << sizeof(movie1.release_year) << " bytes\n";
    cout << " Size of imdb_rating : " << sizeof(movie1.imdb_rating) << " bytes\n";
    // Size of Film struct
    cout << "\nSize of Film struct : " << sizeof(Film) << " bytes\n";
 
    return 0;
}