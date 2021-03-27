#include <iostream>
#include <ctime>
using namespace std;
class List {
public:
        int num;
        List* pointer;
    int counters(int counter) {
        List *num1, *num2;
        int n,counter;
        n = 1 + rand() % 10;
        for (int i = 0; i < n; i++) {
            num2 = num1->pointer;
            num1 = num2;
            counter++;
        }
        cout << "num = " << num1->num << endl;
    };
    void varFind() {
        List* num1, * num2;
        int var, n;
        n = 1 + rand() % 10;
        var = 1 + rand() % 10;
        for (int i = 0; i < n; i++) {
            num2 = num1->pointer;
            num1 = num2;
            if (i == var) {
                cout << "num = " << num1->num << endl;
                break;
            }
        }
    };
};

int main()
{
    srand(time(0));
    List *q1, *q2, *q3;
    int n = 1 + rand() % 10;
    q1 = new List;
    q2 = q1;
    for (int i = 1; i < n; i++) {
        q2->num = rand() % 100;
        q3 = new List;
        q2->pointer = q3;
        q2 = q3;
}
    q2->num = rand() % 20;
    q2->pointer = q1;

    do {
        int knum;
        cout << "input index or 0 to exit" << endl;
        cin >> knum;
        if (!knum) {
            for (int i = 1; i < knum; i++) {
                q2 = q3->pointer;
                delete q3;
                q3 = q2;
            }
            return 0;
        }
        int counters(int counter);
        void varFind();
    } while (true);
}
