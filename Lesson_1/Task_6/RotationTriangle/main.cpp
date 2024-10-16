#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int main() {
    int height = 5; // Высота треугольника
    int leftIndent = 5; // количество пробелов для отступа слева
    int topIndent = 5;  // количество пустых строк для отступа сверху

    do{
        //tr 1
        for (int i = height; i >= 1; i--) {


            for (int j = 1; j <= height - i; j++) {
                cout << " ";
            }

            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        sleep(1);
        system("cls");

        //tr2
        for (int i = 1; i <= height; ++i) {
            for (int j = 1; j <= leftIndent; ++j) {
                cout << " ";
            }
            for (int j = height; j >= i; --j) {
                cout << "*";
            }
            cout << endl;
        }
        sleep(1);
        system("cls");

        //tr3
        for (int i = 1; i <= height; i++) {

            for (int j = 1; j <= leftIndent; j++) {
                cout << " ";
            }

            for (int j = 1; j <= height - i; j++) {
                cout << " ";
            }

            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        sleep(1);
        system("cls");

        //tr4
        for (int i = 0; i < topIndent; i++) {
            cout << endl;
        }

        for (int i = height; i >= 1; i--) {
            for (int j = 1; j <= leftIndent; j++) {
                cout << " ";
            }
            for (int j = 1; j <= height - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        sleep(1);
        system("cls");

        //tr5
        for (int i = 0; i < topIndent; ++i) {
            cout << endl;
        }

        for (int i = 1; i <= height; ++i) {
            for (int j = 0; j < leftIndent; ++j) {
                cout << " ";
            }
            for (int j = 1; j <= i; ++j) {
                cout << "*";
            }
            cout << endl;
        }

        sleep(1);
        system("cls");

        //tr6
        for (int i = 0; i < topIndent; i++) {
            cout << endl;
        }

        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= height - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        sleep(1);
        system("cls");

        //tr7
        for (int i = 0; i < topIndent; ++i) {
            cout << endl;
        }
        for (int i = 1; i <= height; ++i) {
            for (int j = height; j >= i; --j) {
                cout << "*";
            }
            cout << endl;
        }
        sleep(1);
        system("cls");
        //tr8
        for (int i = 1; i <= height; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << "*";
            }
            cout << endl;
        }
        sleep(1);
        system("cls");
    }while(height = 5);
}
