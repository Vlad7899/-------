#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int arr[11] = {};
	int max,min,buf;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 20;
		if (arr[i] % 2 = 0 & max < arr[i])
			max = arr[i];
		else if(arr[i] % 2 = 0 & min > arr[i])
			min = arr[i];
	}
	for (int i = 0; i < 1; i++) {
		buf = max;
		max = min;
		min = buf;
	}
}

