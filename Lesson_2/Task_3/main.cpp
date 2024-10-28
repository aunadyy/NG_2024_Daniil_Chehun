#include <iostream>


using namespace std;

int main()
{

    int numbers[20] ;
    for (int i = 0; i < 20; ++i) {
        numbers[i] = 0;
    }

    for(int i = 0; i < 20; ++i){
        cout << "Enter the number " << i + 1 << ": ";
        cin >> numbers[i];
        if(numbers[i] == 0){
            break;
        }
    }
    cout << endl ;
    for (int num : numbers) {

        for (int i = 0; i < num; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}
