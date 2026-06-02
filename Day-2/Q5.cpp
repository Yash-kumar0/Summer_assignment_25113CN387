/*
Write a program to Find sum of digits of a
number.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum=0;
    int digit;

    cout << "Enter the number :: ";
    cin >> num;

    while (num>0)
    {
        digit = num%10;
        sum=sum+digit;
        num=num/10;
    }

    cout << sum << endl;

    return 0;

}