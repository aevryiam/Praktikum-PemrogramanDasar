#include <iostream>
using namespace std;

int main(){
	int pulse_rate, rest_heart_rate;
	cout << "Take your resting pulse for 10 seconds.\n";
	cout << "Enter your pulse rate and press return> ";
	cin >> pulse_rate;
	rest_heart_rate = pulse_rate*6;
	cout << "Your resting heart rate is " << rest_heart_rate << "." <<endl;
	if (rest_heart_rate > 60 ){
		cout << "Keep up your exercise program!";
	}else {
		cout << "Your heart is in excellent health!";
	}
	return 0;
}