/*
Write a program to Check whether a number is prime.
*/

#include <iostream>
using namespace std;

int main()
{
    int num , count=0;

    cout << "Enter the number :: ";
    cin >> num;

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        cout << "The Given number is Prime number" ;
    }
    else{
        cout << "The Given number is not Prime number";
    }

    return 0;
}