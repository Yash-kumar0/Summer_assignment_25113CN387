/*
Write a program to Write function to find
factorial
*/

#include <iostream>
using namespace std;

int factNum(int n)
{
    int fact=1;

    for(int i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    cout << fact;

    return fact;
}

int main()
{   
    int n;
    cout << "Enter the number :: ";
    cin >> n;

    factNum(n);

    return 0;
}