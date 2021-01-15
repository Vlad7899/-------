﻿#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int *ptArr = new int[10];
	int num;
	cin >> num;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		ptArr[i] = 1 + rand() % 10;
		if (ptArr[i] == num) {
			ptArr[i] = 0;
			delete ptArr[i];
		}
	}
	delete[] ptArr;
}
