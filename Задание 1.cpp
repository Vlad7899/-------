

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;
	cin >> a;
	if (a % 2==0) {
		cout << " a-even integer" << endl;
	}
	cin >> b;
	if (b % 2==0) {
		cout << " b-even integer"<<endl;
	}
	cin >> c;
	if (c % 2==0) {
		cout << " c-even integer" << endl;
	}
	cin >> d;
	if (d % 2==0) {
		cout << " d-even integer" << endl;

	}
	if (a % != 0 && b % != 0 && c % != 0 && d % != 0) {
		cout << "not found";
	}
	if (a % == 0 && a > b || a > c || a > d)
		cout << "a-bigest even number";
	else if (b % == 0 && b > a || b > c || b > d)
		cout << "b-bigest even number";
	else if (c % == 0 && c > a || c > b || c > d)
	    cout << "c-bigest even number";
	else if (d % == 0 && d > a || d > b || d > c)
		cout << "d-bigest even number";
	return 0;
}
