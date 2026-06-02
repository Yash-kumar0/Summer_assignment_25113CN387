/*
Write a program to Reverse a number.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int rev=0;
    int digit;

    cout << "Enter the number :: ";
    cin >> num;

    while (num>0)
    {
        digit = num%10;
        rev=rev*10 + digit;
        num=num/10;
    }

    cout << rev << endl;

    return 0;

}