/*
Write a program to Check strong number.
*/

#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;

    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }

    return fact;
}


int main()
{
    int num;
    int count = 0;
    int sum = 0;
    int digit;

    cout << "Enter the number :: ";
    cin >> num;

    int temp = num;


    while(num>0)
    {
        digit = num % 10;
        sum = sum + fact(digit);
        num = num / 10;
    }

    if(sum == temp)
    {
        cout << "The given number is Strong number";
    }
    else
    {
        cout << "The given number is not Strong number";
    }


    return 0;

}