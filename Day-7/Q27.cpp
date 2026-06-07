/*
Write a program to Recursive reverse number.
*/

#include <iostream>
using namespace std;


int sumOfDigits(int n) {

    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    

    int absNumber = abs(number);
    
    int result = sumOfDigits(absNumber);
    
    cout << "The sum of the digits of " << number << " is: " << result << endl;
    
    return 0;
}
