/*
Write a program to Write function to find sum
of two numbers.
*/

#include <iostream>
using namespace std;

int sum2Num(int n1, int n2)
{
    int sum=0;

    sum=n1+n2;
    cout << sum;

    return sum;
}

int main()
{   
    int n1,n2;
    cout << "Enter the numbers :: ";
    cin >> n1 >> n2;

    sum2Num(n1,n2);

    return 0;
}