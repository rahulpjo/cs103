#include <iostream>
using namespace std;

int main(){
	cout << "Enter a number between 0 and 999: ";
	int x;
	cin >> x;
	if (x>100){
		cout << "100s place: " << x/100 << endl;
		cout << "10s place: " << (x/10)%10 << endl;
		cout << "1s place: " << x%10 << endl;
	}
	else if (x>10){
		cout << "10s place: " << x/10 << endl;
		cout << "1s place: " << x%10 << endl;
	}
	else{
		cout << "1s place: " << x << endl;
	}
}