#include <iostream>
using namespace std;


int reverseNumber(int n, int reversed = 0) {

    if (n == 0) {
        return reversed;
    }
    
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    

    return reverseNumber(n / 10, reversed);
}

int main() {
    int num, reversedNum;
    
    cout << "Enter an integer to reverse: ";
    cin >> num;
    
    reversedNum = reverseNumber(num);
    
    cout << "The reversed number is: " << reversedNum << endl;
    
    return 0;
}
