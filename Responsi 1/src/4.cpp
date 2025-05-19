#include <iostream>
using namespace std;

int main(){
	int a, b;
	int *pa = &a, *pb = &b;
	int sum, absDifference;
	
	cin >> a >> b;
	
	if (a < 1){
		cout << "Mohon masukkan nilai yang benar";
		if (a > b){
			cout << "Mohon masukkan nilai yang benar";
			if ( b > 99){
				cout << "Mohon masukkan nilai yang benar";
			}
		}
	} else {
		sum = a + b;
		absDifference =  a - b;
		absDifference = -(absDifference);
	}
	
	cout << sum << "\n" << absDifference;
	return 0;
}