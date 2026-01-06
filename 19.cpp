// Calculate the factorial of a number

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,fact;
    fact = 1;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << n << " is: " << fact << endl;
    return 0;
}