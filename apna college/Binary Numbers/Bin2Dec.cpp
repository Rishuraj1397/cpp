#include <iostream>
using namespace std;

int BinaryToDecimal(int n)
{
    int ans = 0, pow = 1;

    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        ans += last_digit * pow;
        pow = pow * 2;
    }

    return ans;
}
int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "Decimal representation: " << BinaryToDecimal(n) << endl;
    return 0;
}