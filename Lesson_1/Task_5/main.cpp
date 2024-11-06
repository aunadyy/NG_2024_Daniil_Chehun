#include <iostream>

using namespace std;

int main() {
    int height = 0;

    cout << "Enter the height of elochka : ";
    cin >> height;

    for (int StartingValue = 1; StartingValue <= height + 1; ++StartingValue) {

        if(StartingValue - height == 1){

            StartingValue  = 1;
            for (int RegulatingValue = 1; RegulatingValue <= height - StartingValue; ++RegulatingValue) {
                cout << " ";
            }
            for (int RegulatingValue = 1; RegulatingValue <= 2 * StartingValue - 1; ++RegulatingValue) {
                cout << "*";
            }
            break;
        }

        for (int RegulatingValue = 1; RegulatingValue <= height - StartingValue; ++RegulatingValue) {
            cout << " ";
        }
        for (int RegulatingValue = 1; RegulatingValue <= 2 * StartingValue - 1; ++RegulatingValue) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
