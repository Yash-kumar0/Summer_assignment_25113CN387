/*
Write a program to Check whether a number is palindrome.
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

    int n=num;

    while (num>0)
    {
        digit = num%10;
        rev=rev*10 + digit;
        num=num/10;
    }

    if(rev==n)
    {
        cout << "The Given number is palindrome" << endl;
    }

    else
    {
        cout << "The Given number is not palindrome" << endl;
    }

    return 0;

}