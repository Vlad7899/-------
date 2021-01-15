#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int numOne = 5;
	int numTwo = 4;
	int* ptArr;
	ptArr = new int[5 * 4];
	srand(time(0));
	for (int i = 0; i < numOne; i++) {
		for (int j = 0; j < numTwo; j++) {
			ptArr[i * j] = 1 + rand() % 20;
			cout << ptArr[i * j]<<' ';
		}
	}
	cout << endl;
	for (int i = 0; i < numOne; i++) {
		for (int j = 0; j < numTwo+1; j++) {
			cout << ptArr[i * j] << ' ';
		}
	}
}
