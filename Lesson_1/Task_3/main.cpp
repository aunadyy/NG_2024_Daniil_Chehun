#include <iostream>
using namespace std;
int main(){
    int firstnum,secondnum;
    firstnum=0;
    secondnum=0;
    char action;

    while(true){
        cin>>firstnum>>action>>secondnum;
        switch(action){
        case '*':
            cout<<firstnum*secondnum;
            break;
        case '-':
            cout<<firstnum-secondnum;
            break;
        case '+':
            cout<<firstnum+secondnum;
            break;
        case '/':
            cout<<firstnum/secondnum;
            break;
        default:
            return 0;
        }


    }
}
