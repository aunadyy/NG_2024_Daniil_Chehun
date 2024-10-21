#include <iostream>
using namespace std;

int main()
{

    int numbers[5];
    int maxValue = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter " << i + 1 << " value: ";
        cin >> numbers[i];
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }


    for (int i = 0; i < maxValue; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (numbers[j] > i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
