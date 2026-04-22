#include <iostream>
using namespace std;

int reverse(int n){
    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = (reverse * 10) + lastdigit;
        n = n / 10;
    }
    return reverse;
    
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int rev = reverse(n);
    if (n == rev)
    {
        cout << "This is a palindrome number" << endl;
    }else{
        cout << "This is not a palindrom number" << endl;
    }
    
    return 0;
}