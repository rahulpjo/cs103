#include <iostream>
#include <cmath>
<<<<<<< HEAD
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
=======
using namepace std;

int main(){
int num;
cout << "Enter a number: ";
cin >> num;
	for (int x = 0; x <= num/2; x++){
		for (int y = 0; y <= num/2; y++){
			if (pow(2,x) * pow(3,x) == num){
				bool factor = true;
>>>>>>> 38c6fdeaafdef1e232dedcaac04691489742f42f
				break;
			}
			else {
				factor = false;
			}
<<<<<<< HEAD
			y++;
		}
		if (factor){
			break;
		x++;
		}
	}

=======
		}
		if (factor){
			break;
		}
	}
>>>>>>> 38c6fdeaafdef1e232dedcaac04691489742f42f
	if (factor){
		cout << "Yes" << endl;
		cout << "Twos=" << x << " Threes=" << y;
	}
	else {
		cout << "No";
	}
}