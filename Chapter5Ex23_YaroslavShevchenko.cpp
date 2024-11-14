/*

Tite Chapter 5 Exercise 23 - Pattern Display
File name:Chapter5Ex23_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 11/13/2024
Requirements:

Write a program that uses a loop to display Pattern A, & pattern B;

*/
#include <iostream>
using namespace std;


void patternA();
void patternB();

int main()
{
    cout << "Pattern A: ";
    patternA();
    cout << "\n\nPattern B: ";
    patternB();
}

void patternA() {
    for (int i = 1; i < 11; i++) {
        cout << "\n";
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
    }
}

void patternB() {
    for (int i = 10; i > 0; i--) {
        cout << "\n";
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
    }
}
