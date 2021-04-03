#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	bool flag;
	char n;
	char str[20];
	cout << "Symbol:";
	cin >> n;
	for (int i = 0; i < 20; i++) {
    str[i] = 'A' + rand() % ('z' - 'A');
	}
	for (int i = 0; i < 20; i++) {
		cout << str[i];
		if (n == str[i]) {
			cout << "Index of symbol:" << i;
			flag = true;
		}
		else if (flag != true)
			cout << "Not found";
	}
	return 0;
}
