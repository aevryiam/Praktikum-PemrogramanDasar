#include <iostream>
using namespace std;

void area (float);

int main (){
	float radius;
	cin >> radius;
	area(radius);
}
	
void area (float r){
	float A;
	A = 3.1416 *r* r;
	cout << "The area of the circle is " << A << endl;
}