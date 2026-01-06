// Generating a fibbonaci series

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1;
    cout << "Fibonacci Series: " << a << ", " << b;

    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << ", " << c;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}