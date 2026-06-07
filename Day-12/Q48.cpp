/*
Write a program to Write function for perfect number.
*/

#include <iostream>
using namespace std;

int isPerfect(int n)
{
    int sum = 0;

    for(int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        return sum;
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

    if(isPerfect(num))
    {
        cout << "The given number is perfect number";
    }
    else
    {
        cout << "The given number is not perfect number";
    }

    return 0;
}