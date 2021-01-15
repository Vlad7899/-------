#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int *ptArr = new int[10];
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 10;
		if (i % 2 == 0) {
			arr[i] = 0;
		}		
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	delete[] ptArr; 
}
