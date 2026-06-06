/*
Write a program to Find largest prime factor of a munber.
*/

#include <iostream>
using namespace std;

int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }

    for(int i=2; i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;

    cout << "Enter the number ::";
    cin >> num;

    int largest = -1;

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            if(isPrime(i))
            {
                largest = i;
            }
        }
    }

    cout << "Largest Prime factor is :: " << largest << endl;

    
    return 0;
}