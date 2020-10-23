#include <iostream>
using namespace std;

int main()
{
    int Distday = 10;
    int Day = 0;
    for (int a = 1; a <= 1000; a++)
        Day += Distday;
    Distday += Distday * 0, 1;
    if (Day == 2)
        cout << Distday << "for 2 day";
    else if (Day == 3)
        cout << Distday << "for 3 day";
    else if (Day == 10)
         cout << Distday << "for 10 day";
        return 0;
    
}
                         













