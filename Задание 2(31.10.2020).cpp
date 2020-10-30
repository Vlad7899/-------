#include <iostream>
using namespace std;

int main() {
    int a, max;
    cin>>a;
    max = a % 10;
    a = a / 10;
    while (a > 0) {
        if (a % 10 > max)
            max = a % 10;
        a = a / 10;
    }
    cout<<max;
}
