/*\
Write a program to Check Armstrong number.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num,count=0;
    int digit,sum=0;

    cout << "Enter the number :: ";
    cin >> num;

    int temp=num;

    while(temp>0)
    {
        temp=temp/10;
        count++;
    }

    temp=num;

    while(temp>0)
    {
        digit = temp%10;
        sum += round(pow(digit,count));
        temp = temp/10;
    }

    if(sum==num)
    {
        cout << num << " is Armstrong number";
    }
    else
    {
        cout << num << " is not Armstrong number";
    }

    return 0;
}
