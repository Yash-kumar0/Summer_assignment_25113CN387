/*
Write a program to Convert binary to decimal.
*/

#include <iostream>
using namespace std;

int main()
{
    int binNum;
    int pow = 1;
    int result = 0;
    int rem;


    cout << "Enter the binary number ::";
    cin >> binNum;

    while(binNum > 0)
    {
        rem = binNum % 10;
        result += rem * pow;
        pow = pow * 2;
        binNum = binNum / 10;

    }

    cout << result << endl;



    return 0;
}