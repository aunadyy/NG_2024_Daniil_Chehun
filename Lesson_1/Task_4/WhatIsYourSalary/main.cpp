#include <iostream>
using namespace std;
int main(){
    int salary;

    cout << "What is your salary?:  ";
    cin >> salary;
    if(salary < 1000){
        cout<<"Work harder, like a Hindu";
    }
    else if(salary > 1000){
        cout<<"Well done!";
    }
    else if(salary == 1000){
        return 0;
    }
    else if(salary < 1000000){
        cout<<"Well done!";
    }
    else if(salary > 1000000){
        cout<<"You are millioner!";
    }
    else if(salary == 1000000){
        return 0;
    }



}
