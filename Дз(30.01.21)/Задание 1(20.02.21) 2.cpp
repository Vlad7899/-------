﻿#include <iostream>
#include <ctime>

using namespace std;

struct List {
    int value;
    List* p;
};

void getm(int k, List* q) {
    List* t, * t1;
    t = q;
    for (int i = 0; i < k; i++) {
        t1 = t->p;
        t = t1;
    }
    cout << "value = " << t->value << endl;
}

int main() {
    srand(time(0));
    int n;
    int num = 5;
    int num1 = 10;
    List* q0, * q1, * q2;

    q0 = new List;
    q1 = q0;

    cout << "n=";
    cin >> n;

    for (int i = 1; i < n; i++) {
        q1->value = rand() % 100;
        q2 = new List;
        q1->p = q2;
        q1 = q2;
    }
    q1->value = rand() % 100;
    q1->p = q0;
    for (int i = 1; i < n; i++) {
        q1->value = rand() % 100;
        cout << q1->value;
        if (q1->value == num1)
        {
            continue;
        }
    }
    if (q1->value == num)
    {
        cout << "Num found";
    }
    else
        cout << "Not found";
    do {
        int k;
        cout << "input index or 0 to exit" << endl;
        cin >> k;
        if (!k) {
            for (int i = 1; i < n; i++) {
                q1 = q2->p;
                delete q2;
                q2 = q1;
            }
            return 0;
        }
        getm(k, q0);
    } while (true);
}