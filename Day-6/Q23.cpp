/*
Write a program to Count set bits in a number.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;

    cout << "Enter the number :: ";
    cin >> num;

    while(num > 0)
    {
        int lastbit = num & 1;
        count ++;
        num = num >> 1;
    }

    cout << count << endl;

    return 0;
}