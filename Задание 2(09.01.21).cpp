#include <iostream>
#include <ctime>
using namespace std;

int main()
{

	int n, k;
	int numcount;
	const int num = 5;
	cin >> k;
	for (int i = 0; 1 < k; i++) {
	    cin >> n;
		if (num > n) {
			cout << "Number " << n << " is less than\n"; 
		}
		else if (num < n) {
			cout << "Number " << n << " greater than\n";
		}
		else if (num == n) {
			cout << "You win\n";
			numcount = 1;
			break;
		}
	}
	if (numcount == 1)
		cout << "You guessed it";
}
