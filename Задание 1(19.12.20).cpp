#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int arr[10] = {};
	int max,n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 50;
		cout << arr[i], ' ';
	}
		for (int i = 1; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
			{
				max = arr[i];
				cout << "Local max: " << max << endl;
			}
		}
}
