#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

struct List {
    int value;
    List* p;
};

int n;

void getm(int k, List* q) {
    List* t, * t1;
    t = q;
    for (int i = 0; i < k; i++) {
        t1 = t->p;
        t = t1;
    }
    cout << "value = " << t->value << endl;
}
List* searchElem(int value, List* q) {
    List* t, * t1, * searchpointer;
    t = q;
    for (int i = 0; i < n; i++) {
        if (value == t->value) {
            searchpointer = t;
            return searchpointer;
    }
        t1 = t->p;
        t = t1;
    }
    return "Nothing.";
}
void removeElem(int k, List* q) {
    List* t, * t1, * beforeElem;
    t = q;
    for (int i = 0; i < k; i++) {
        if (i == k - 1) {
            beforeElem = t;
    }
        t1 = t->p;
        t = t1;
    }
    beforeElem->p = t->p;
    delete t;
    n = n - 1;
}
void printList(List* q) {
    List* t, * t1;
    t = q;
    for (int i = 0; i < k; i++) {
        t1 = t->p;
        cout << i + 1 << ":value=" << t->value << "\n";
        t = t1;
    }

}

int main() {
    srand(time(0));
    int n;
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
        printList(q0);
        cout << searchElem(5, q0) << endl;
        removeElem(5, q0);
        printList(q0);
    } while (true);
}