/*
Write a program to Find x^n without pow(). 
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int pow;
    int temp;
    int c = 1;

    cout << "Enter the number :: ";
    cin >> num;

    cout << "Enter the power :: ";
    cin >> pow;

    temp = num;

    for(int i=1 ; i<=pow ; i++)
    {
        c = c * temp; 
    }

    cout << "The Result is :: " << c << endl;

    return 0;
}