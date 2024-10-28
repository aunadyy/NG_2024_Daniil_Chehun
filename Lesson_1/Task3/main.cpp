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

        switch(action) {
        case '*':
            cout<<"Your result :"<<firstnum*secondnum << "\n";
            break;
        case '-':
            cout<<"Your result :"<<firstnum-secondnum << "\n";
            break;
        case '+':
            cout<<"Your result :"<<firstnum+secondnum << "\n";
            break;
        case '/':
            cout<<"Your result :"<<firstnum/secondnum << "\n";
            break;
        default:
            return 0;
        }


    }
}
