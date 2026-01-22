#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int reversed = reverseInteger(n);
    cout << "Reversed integer: " << reversed << endl;
    return 0;
}