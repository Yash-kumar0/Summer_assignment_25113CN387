/*
Write a program for Recursive Fibonacci.
*/

#include <iostream>
using namespace std;

int fibonacci(int n)
{

    if (n == 0) return 0;
    if (n == 1) return 1;


    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n)
{
    cout << "Fibonacci Series (" << n << " terms): ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i);
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

int main()
{
    int num;

    cout << "Enter the number of terms :: ";
    cin >> num;

    if (num <= 0)
    {
        cout << "Please enter a positive number." << endl;
        return 1;
    }


    cout << "Fibonacci(" << num << ") = " << fibonacci(num) << endl;


    printFibonacci(num);

    return 0;
}