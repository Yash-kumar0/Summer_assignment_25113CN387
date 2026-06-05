/*
Write a program to Print Armstrong numbers in a range.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1,n2;
    int temp;

    cout << "Enter the initial range :: ";
    cin >> n1;

    cout << "Enter the final range :: ";
    cin >> n2;

    for(int i=n1;i<=n2;i++)
    {
        int num = i;
        int sum = 0;
        int count = 0;

        temp = num;

        while(temp>0)
        {
            temp=temp/10;
            count++;
        }

        temp = num;

        while(temp>0)
        {
            int digit = temp%10;
            sum += round(pow(digit,count));
            temp = temp/10;
        }

        if(sum==num)
        {
            cout << num << endl;
        }
    }


    return 0;
}
