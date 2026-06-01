/*
Write a program to Print hollow square
pattern.
*****
*   *
*   *
*   *
*****
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :: ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout <<"*";
        }
        for(int j=1;j<=3;j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}