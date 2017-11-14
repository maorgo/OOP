#include <iostream>

using namespace std;

void swapRef(int &x, int &y) {
	int tmp;
	cout << "Value of x is: " << x << ". value of y is: " << y << endl;
	tmp = x;
	x = y;
	y = tmp;
	cout << "Value of x is: " << x << ". value of y is: " << y << endl;
}

void swap(int *x, int *y) {
	int tmp;
	cout << "Value of x is: " << x << ". value of y is: " << y << endl;
	tmp = *x;
	*x = *y;
	*y = *x;
	cout << "Value of x is: " << x << ". value of y is: " << y << endl;
}

int checkDate(int &day, int &month, int &year) {
	if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31))
		return 0;

	swap(day, month);

	return 1;
}

void main() {
	int x = 5, y = 71, z = 2017;
	int &day = x, &month = y, &year = z;
	cout << checkDate(x, y, z);
	cout << "\nAfter checkDate: Day:" << day << " Month:" << month;
	/*cout << "swap function:"<<endl;
	swap(x, y);
	cout << "swapRef function:"<<endl;
	swapRef(x, y);
	*/



	cin >> x;
}