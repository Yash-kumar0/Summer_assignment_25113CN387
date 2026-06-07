/*
Write a program to Write function to check prime.
*/

#include <iostream>
using namespace std;

int isPrime(int n)
{
    if(n<2)
    {
        return 0;
    }

    for(int i =2 ; i*i<=n ; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num;

    cout << "Enter the number :: ";
    cin >> num;

    if(isPrime(num))
    {
        cout << "The given number is prime number ";
    }
    else
    {
        cout << "The given number is not prime number ";
    }

    return 0;
}