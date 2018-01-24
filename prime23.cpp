#include <iostream>
#include <cmath>
using namepace std;

int main(){
int num;
cout << "Enter a number: ";
cin >> num;
	for (int x = 0; x <= num/2; x++){
		for (int y = 0; y <= num/2; y++){
			if (pow(2,x) * pow(3,x) == num){
				bool factor = true;
				break;
			}
			else {
				factor = false;
			}
		}
		if (factor){
			break;
		}
	}
	if (factor){
		cout << "Yes" << endl;
		cout << "Twos=" << x << " Threes=" << y;
	}
	else {
		cout << "No";
	}
}