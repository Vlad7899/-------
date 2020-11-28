#include <iostream>
using namespace std;

int main()
{
	int arr[11] = {};
	int x;
	cin >> x;
	for (int i = 0; i <= 10; i++) {
		cin >> arr[i];
		if (x == arr[i]) {
			cout << "Num exist";
			break;
		}
		else
		{
			cout << "Num dont exist";
			break;
		}
	}
}
