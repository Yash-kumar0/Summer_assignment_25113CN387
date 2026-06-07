/*
Write a program to Recursive factorial.
*/

#include <iostream>
using namespace std;

int recFact(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n*recFact(n-1);
}

int main()
{
    int num;

    cout << "Enter the number :: ";
    cin >> num;

    cout << recFact(num) << endl;

    return 0;
}