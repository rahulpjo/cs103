#include <iostream>
#include <cmath>
using namepace std;

int main(){
int num;
cout << "Enter a positive integer: ";
cin >> num;
	while (int x <= num/2){
		while (int y <= num/2){
			if (pow(2,x) * pow(3,x) == num){
				bool factor = true;
				break;
			}
			else {
				factor = false;
			}
			y++;
		}
		if (factor){
			break;
		x++;
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