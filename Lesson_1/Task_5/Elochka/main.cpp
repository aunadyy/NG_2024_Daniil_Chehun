#include <iostream>

using namespace std;

int main() {
    int height = 0;

    cout << "Enter the height of elochka : ";
    cin >> height;

    for (int i = 1; i <= height + 1; ++i) {

        if(i - height == 1){

            i  = 1;
            for (int j = 1; j <= height - i; ++j) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; ++j) {
                cout << "*";
            }
            break;
        }

        for (int j = 1; j <= height - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
