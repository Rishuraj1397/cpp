#include<iostream>
using namespace std;

int reverseInteger(int n) {
    int reversedNum = 0;
    while (n != 0) {
        int digit = n % 10;
        if ((reversedNum>INT_MAX) || (reversedNum<INT_MIN))
        {
            return 0;
        }
        
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }
    return reversedNum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    int reversed = reverseInteger(n);
    if (n == reversed) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}