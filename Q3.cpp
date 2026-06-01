/*
Write a program to Find factorial of a number
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int fact=1;

    cout << "Enter the number :: ";
    cin >> num;

    for(int i=1;i<=num;i++)
    {
        fact = fact*i;
    }

    cout << fact << endl;

    return 0;
}