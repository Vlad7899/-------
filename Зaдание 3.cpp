#include <iostream>
using namespace std;

int main()
{
    int N = 11;  
    int W = 12;  
    int S = 13;  
    int E = 14;
    int a;
    int n1=0;
    int n2=1;
    int n3=-1;
    int b;
    cout << "Enter direction:";
    cin >> a;
    cout << "Enter comand:";
    cin >> b;
    if (a == N && b == n1)
        cout << "robot looks and goes North";
    else if (a == N && b == n2)
        cout << "robot turns West";
    else if (a == N && b == n3)
        cout << "robot turns East";
    else if (a == W && b == n1)
        cout << "robot looks and goes West";
    else if (a == W && b == n2)
        cout << "robot turns South";
    else if (a == W && b == n3)
        cout << "robot turns North";
    else if (a == S && b == n1)
        cout << "robot looks and goes South";
    else if (a == S && b == n2)
        cout << "robot turns East";
    else if (a == S && b == n3)
        cout << "robot turns West";
    else if (a == E && b == n1)
        cout << "robot looks and goes East";
    else if (a == E && b == n2)
        cout << "robot turns North";
    else if (a == E && b == n3)
        cout << "robot turns South";
    else
        cout << "error";
    return 0;
}