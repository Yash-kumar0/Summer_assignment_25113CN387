/*
rite a program to Find nth Fibonacci term.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int t1=0,t2=1;
    int nextTerm;

    cout << "Enter the term which you want to find :: ";
    cin >> n;

    for(int i=1;i<n;i++)
    {

        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;

    }
    cout << nextTerm << " ";

    return 0;
}