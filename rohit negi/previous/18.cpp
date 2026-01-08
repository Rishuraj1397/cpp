// printing the power of a num 

#include <iostream>
using namespace std;

int main() {
    int n,pow,i;
    cout << "Enter a number: ";
    cin >> n;    
    cout<<"Enter the power: ";
    cin>>pow;

    int num = n;
    for (int i = 1; i < pow; i++)
    {
        num = num * n;
    }
    cout << "The value of " << n << " raised to the power " << pow << " is: " << num << endl;
    return 0;
}