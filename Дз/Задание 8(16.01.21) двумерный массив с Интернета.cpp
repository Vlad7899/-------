#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");

    int n = 0, m = 0;
    cout << "Введите количество строк\n  ";    cin >> n;
    cout << "Введите количество столбцов\n  "; cin >> m;
    cout << "\nМатрица размера " << n << "x" << m << "\n\n";

    int** A = new int* [n], M = m + m / 2;
    for (int i = 0; i < n; i++) A[i] = new int[M];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % 100 - 50;
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nМатрица с добавленными случайными столбцами после чётных столбцов:\n\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < M; j += 3)
        {
            for (int k = M; k > j; k--) A[i][k] = A[i][k - 1];
            A[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < M; j++) cout << A[i][j] << "\t";
        cout << "\n";
    }

    system("PAUSE >> VOID");
    return 0;
}