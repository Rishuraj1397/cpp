#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num;      // store original number for comparison later
    int n = 0;               // to count number of digits
    int result = 0;          // to store sum of digits^n

    int temp = num;

    // Step 1: count number of digits
    while (temp != 0) {
        temp /= 10;          // remove last digit
        n++;                 // increase digit count
    }

    temp = num;

    // Step 2: calculate sum of each digit raised to power n
    while (temp != 0) {
        int digit = temp % 10;        // extract last digit
        result += pow(digit, n);      // add digit^n to result
        temp /= 10;                  // remove last digit
    }

    // Step 3: check if result equals original number
    return result == original;
}

int main() {
    int num;
    cin >> num;   // take input from user

    // Step 4: call function and print result
    if (isArmstrong(num))
        cout << "Armstrong number";
    else
        cout << "Not Armstrong number";

    return 0;
}