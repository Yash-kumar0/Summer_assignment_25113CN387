/*
Write a program to Print prime numbers in a range.
*/

#include <iostream>
using namespace std;

int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
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
    int initial , final ;

    cout << "Enter the initial range :: ";
    cin >> initial;

    cout << "Enter the final range :: ";
    cin >> final;

    for(int i=initial ; i<=final ;i++)
    {
        if(isPrime(i))
        {
            cout << i <<endl;
        }
    }
    return 0;

}