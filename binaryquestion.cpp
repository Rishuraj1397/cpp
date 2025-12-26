//Adding the digit of an integer until a single digit is obtained
#include<iostream>
using namespace std;

int main() {
    int n, rem;
    int ans = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 9) {
        ans = 0;
        while (n > 0) {
            rem = n % 10;
            n = n / 10;
            ans = ans + rem;
        }
        n = ans;
    }
    
    cout << ans << endl;
    return 0;
}