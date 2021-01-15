#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int num;
    int* ptArr = new int[10];
	cin >> num;
	srand(time(0));
	for (int i = 0; i < 10; i++) {		
			ptArr[i] = 1 + rand() % 20;
			cout << ptArr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < num + i; i++) {
		cout << ptArr[i] << ' ';
	}
	delete[] ptArr;
}