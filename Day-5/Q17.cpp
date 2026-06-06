/*
Write a program to Check perfect number. 
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter the number :: ";
    cin >> num; 

    int temp = num;

    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum = sum + i;
        }
    }

    if(sum == temp)
    {
        cout << "The Given number is perfect number";
    }
    else
    {
        cout << "The Given number is not perfect number";
    }


    return 0;
}