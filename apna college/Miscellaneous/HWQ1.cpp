// Write a program to chechk whether a number is pwoer of 2 or not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    if (n > 0 && (n & (n - 1)) == 0)
        cout << "Power of 2\n";
    else
        cout << "Not a power of 2\n";
    return 0;
}