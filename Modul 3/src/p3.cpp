#include <iostream>
using namespace std;

int main(){
	int n;
	int sum;
	
	do {
		//sum += n;
		
		cout << "Enter a number: ";
		cin >> n;
		
		sum += n;
	}
	while (n >= 0);
	
	cout << "\nThe sum is " << sum <<endl;
	
	return 0;
}