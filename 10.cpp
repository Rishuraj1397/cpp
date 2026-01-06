// print the square from 1 to n


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i * i << endl;
    }
    return 0;
}