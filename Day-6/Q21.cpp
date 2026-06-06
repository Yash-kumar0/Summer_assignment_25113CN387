/*
Write a program to Convert decimal to binary.
*/

#include <iostream>
using namespace std;

int main()
{
    int decNum;
    int rem;
    int pow = 1;
    int result = 0;

    cout << "Enter the decimal number :: ";
    cin >> decNum;

    while(decNum>0)
    {
        rem = decNum % 2;
        decNum = decNum / 2;
        result += rem * pow;
        pow = pow * 10;
    }

    cout << result << endl;

    return 0;
}