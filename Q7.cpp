/*
Write a program to Find product of digits
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int fact=1;
    int digit;

    cout << "Enter the number :: ";
    cin >> num;

    while (num>0)
    {
        digit = num%10;
        fact=fact*digit;
        num=num/10;
    }

    cout << fact << endl;

    return 0;

}