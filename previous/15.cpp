// Printing from 1 to n but the difference beetween the number is 3 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i += 3) {
        cout << i << endl;
    }
    return 0;
}