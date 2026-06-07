/*
Write a program to Print character pyramid. Microsoft, Adobe, Paytm
 A
 ABA
 ABCBA
 ABCDCBA
 ABCDEDCBA
*/

#include <iostream>
using namespace std;

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; i++) {
        

        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        

        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            cout << ch;
            ch++;
        }
        

        ch -= 2;
        

        for (int l = i - 1; l >= 1; l--) {
            cout << ch;
            ch--;
        }
        

        cout << endl;
    }

    return 0;
}
