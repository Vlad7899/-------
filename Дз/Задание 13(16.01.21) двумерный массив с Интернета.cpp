#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
    int** a;
    int** matr, ** b;
    int n, i, m, j, k, p;

    cout << "Vvedite kolichestvo strok/n: "; cin >> n;
    cout << "Vvedite kolichestvo stolbcov/n:"; cin >> m;
    matr = new int* [n];
    for (int i = 0; i < n; i++) { matr[i] = new int[m]; }
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matr[i][j] = rand() % 50;
            cout << matr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Vvedite nomer stroki K1";
    cin >> k;
    b = new int* [n];
    for (int i = 0; i < m; i++) { b[i] = new int(n - 1); }

    for (i = 0; i < k; i++)
        for (j = 0; j < m; j++)
        {
            b[i][j] = matr[i][j];
        }

    for (i = k; i < (n - 1); i++)
    {
        for (j = 0; j < n; j++)
            b[i][j] = matr[i + 1][j];
    }

    cout << "New array\n";
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < m; j++)
            cout << b[i][j] << '\t';
        cout << '\n';
    }


}