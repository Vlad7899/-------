#include <iostream>
using namespace std;

int main()
{
	const int i=9;
	int arr[i] = {2,3,4,5,6,7,8,9,10};
	for (int a = 0; a <= 9; a++) {
		if (arr[i] % 2 == 0) {
			arr[i] = 0;
		}
		else(arr[i] % 2 != 0) {
			arr[i] = 1;
		}
	}
	for (int a = 0; a <= 9; a++) {
		cout << arr[i]<<' ';
	}
}
