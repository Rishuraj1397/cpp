#include <iostream>
using namespace std;

//Sum of digits of a number

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfDigits(number);
    cout << "Sum of digits: " << result << endl;

    return 0;
}