#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int arr[10];
	int buf;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 20;
	}
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) {
			{
				if (arr[i] <= arr[i + 1]) {
					arr[i] = buf;
					arr[i + 1] = arr[i];
					arr[i + 1] = buf;
				}
			}
		}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}
