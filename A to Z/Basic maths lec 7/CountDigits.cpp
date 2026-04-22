#include <iostream>
using namespace std;

int count(int n){
    int cnt = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
    
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The no of digit in n is: " << count(n) << endl;
    return 0;
}