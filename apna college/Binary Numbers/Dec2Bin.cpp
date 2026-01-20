#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0 , pow = 1;

    while (n > 0)
    {
        int rem = n % 2;
        n = n / 2;
        ans += rem * pow;
        pow = pow * 10;
    }
    
    return ans;
}
int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary representation: " << decimalToBinary(n) << endl;
    return 0;
}