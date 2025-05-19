#include <iostream>
 using namespace std;
 
 int main(){
	 int total;
	 cout << "Input nilai total : ";
	 cin >> total;
	 if(total >= 95){
		 cout << "Outstanding";
	 } else if (total >= 90){
		 cout << "Excellent";
	 } else if (total >= 85){
		 cout << "Very satisfying";
	 } else if (total >= 80){
		 cout << "Satisfying";
	 } else if (total >= 75){
		 cout << "Good";
	 } else {
		 cout << "Need for improvement";
	 }
	 return 0;
 }