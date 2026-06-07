/*
Write a program to Write function for palindrome.
*/

#include <iostream>
using namespace std;

int isPalindrome(int n)
{
    int rev=0;
    int digit;

    int temp = n;


    while(n>0)
    {
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }

    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}



int main()
{
    int num;

    cout << "Enter the number :: ";
    cin >> num;

    if(isPalindrome(num))
    {
        cout << "The given number is palindrome";
    }
    else
    {
        cout << "The given number is not palindrome";
    }

    return 0;

}