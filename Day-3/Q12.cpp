/*
Write a program to Find LCM of two numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int n1,n2,lcm=1;

    cout << "Enter the first number :: ";
    cin >> n1;

    cout << "Enter the second number :: ";
    cin >> n2;

    for(int i=1;i>0;i++)
    {
        if(i%n1==0 && i%n2==0)
        {
            lcm=i;
            cout << "LCM is :: " << lcm ;
            break;
        }
    }

    return 0;
}