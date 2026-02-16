// Sum of 1 to N using function in recursion


#include <iostream>
using namespace std;

int sum(int n){
    if (n == 0) return 0;
    return n + sum(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;

    cout << "Sum = " << sum(n) << endl;

    return 0;
}