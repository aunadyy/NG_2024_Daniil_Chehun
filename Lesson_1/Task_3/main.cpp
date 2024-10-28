#include <iostream>
using namespace std;
int main() {
    int firstnum,secondnum;
    firstnum=0;
    secondnum=0;
    char action;

    while(true) {
        cout << "Enter the task in the format : firstNum *action* secondNum:";
        cin>>firstnum>>action>>secondnum;

        int result;
        switch(action) {

        case '*':
            result = firstnum*secondnum;
            break;
        case '-':
            result = firstnum-secondnum;
            break;
        case '+':
            result = firstnum+secondnum;
            break;
        case '/':
            result = firstnum/secondnum;
            break;
        default:
            return 0;
        }

        cout<<"Your result :"<< result << "\n";


    }
}
