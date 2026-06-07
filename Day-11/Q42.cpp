/*
Write a program to Write function to find
maximum.
*/
#include <iostream>
using namespace std;

int maxNum(int n1,int n2)
{
    if(n1>n2)
    {
        cout << "1st number is maximum";
    }

    else{

        cout << "2nd number is maximum";
    }
    
    return 0;
}


int main()
{
    int n1,n2;
    cout << "Enter the numbers :: ";
    cin >> n1 >> n2;

    maxNum(n1,n2);

    return 0;
}