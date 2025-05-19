#include <iostream>
using namespace std;

int main(){
	int n, x, y, num = 1;
	
	cout << "Input the number of the rows : ";
	cin >> n;
	x = 1, y = 1;
	while ( x <= n){
		while (y <= n){
			cout << num << " ";
			num ++, y++;
		}
		cout <<endl;
		x++;
	}
	return 0;
}