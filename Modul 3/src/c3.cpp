#include <iostream>
using namespace std;

int main(){
	int n, digit, num, rev = 0;
	
	cout << "Enter the number : ";
	cin >> num;
	
	int save = num;
	
	while ( num != 0){
		digit = num%10;
		rev = rev*10 + digit;
		num = num/10;
	}
	
	cout << rev << endl;
	if (rev == save){
		cout << "palindrome";
	} else {
		cout << "Non-palindrome";
	}
	return 0;
}