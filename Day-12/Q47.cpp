/*
Write a program to Write function for fibonacci.
*/

#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    int nextTerm;
    int t1 = 0 , t2 = 1;

 

    for(int i=0 ; i<n ; i++)
    {
        if(n == 0)
        {
            return t1;
            continue;
        }

        if(n == 1)
        {
            return t2;
            continue;
        }
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return nextTerm;
}

int main()
{
    int num;

    cout << "Enter the number :: ";
    cin >> num;

    cout << Fibonacci(num);

    return 0;

    
}