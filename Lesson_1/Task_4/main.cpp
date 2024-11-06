#include <iostream>
using namespace std;

int main() {
    int salary;

    cout << "What is your salary?: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "Work harder, like a Hindu!" << endl;
    }
    if (salary > 1000) {
        if (salary < 1000000) {
            cout << "Well done!" << endl;
        }
    }
    if (salary > 1000000) {
        cout << "You are a millionaire!" << endl;
    }

    return 0;
}
