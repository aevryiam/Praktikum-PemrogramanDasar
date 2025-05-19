// ** THIS IS JUST AN ALTERNATIVE SOLUTION **
// ** THIS IS JUST AN ALTERNATIVE SOLUTION **
// ** THIS IS JUST AN ALTERNATIVE SOLUTION **

#include <iostream>
using namespace std;

int main(){
	int a, b;
	int *pa = &a, *pb = &b;
	int sum, absDifference;
	
	cin >> a >> b;
	
	if (1 <= a <= b <= 99){
		sum = a + b;
		absDifference =  a - b;
		absDifference = -(absDifference);
	} else {
		cout << "Mohon masukkan nilai yang benar";
	}
	
	cout << sum << "\n" << absDifference;
	return 0;
}