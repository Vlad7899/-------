#include <iostream>
using namespace std;

int main()
{
    double distance = 10, total = 0;
    int day = 1;
    cout << "Day\tDistance" << endl;
    do
    {
        cout << day << '\t' << distance << endl;
        total += distance;
        distance += 0.1 * distance;
        ++day;
    } while (day <= 7);
    cout << "Total: " << total;
    return 0;
}