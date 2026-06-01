#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number :: ";
    cin >> num;

    if(num%)
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }

    return 0;
}