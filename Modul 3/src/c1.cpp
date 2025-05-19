/*#include <iostream>
using namespace std;

int main(){
	for (int mult4 = 0; mult4 <= 100; mult4 += 4){
		cout << mult4;
	}
	return 0;
}*/

#include <iostream>
using namespace std;

int main(){
	int mult4 = 0;
	do {
		cout << mult4 << endl;
		mult4 += 4;
	} while( mult4 <= 100);
		
	return 0;
}