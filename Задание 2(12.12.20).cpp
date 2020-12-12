#include <iostream>
using namespace std;

int main()
{
	int arr[] = {};
	int max = 0;
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 20;
		if (arr[i] % 2 != 0 & arr[i] > max & arr[i] % 3 = 0) {
			max = arr[i];
		}
	}
	cout << max;
}
