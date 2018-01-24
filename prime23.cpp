#include <iostream>
#include <cmath>
using namespace std;

int main(){
int num, x, y;
bool factor;
cout << "Enter a positive integer: ";
cin >> num;
	while (x <= num/2){
		while (y <= num/2){
			if (pow(2,x) * pow(3,x) == num){
				factor = true;
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