/*
Write a program to Write function for Armstrong.
*/

#include <iostream>
#include <cmath>
using namespace std;

int isArmstrong(int n)
{
    int sum = 0;
    int count = 0;
    int digit;
    int temp = n;

    while(n>0)
    {
        n = n/10;
        count++;
    }

    n = temp;

    while(n>0)
    {
        digit = n%10 ;
        sum += round(pow(digit,count));
        n = n/10;
    }

    if(sum == temp){

        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num;

    cout << "Enter the number :: ";
    cin >> num;

    if(isArmstrong(num))
    {
        cout << "The Given Number is Armstrong number ";
    }
    else
    {
        cout << "The Given number is not Armstrong number ";
    }

    return 0;
}