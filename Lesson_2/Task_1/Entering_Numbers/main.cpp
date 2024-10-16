#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    for(int i = 0; i < 5; ++i){
        cout << "Enter the number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "You have entered numbers : " << numbers[0] << "," << numbers[1] << "," << numbers[2] << "," << numbers[3] << "," << numbers[4] << endl;

    return 0;
}
