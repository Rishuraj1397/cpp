// printing some pattern


#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cout << "Enter the value of row: ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 10; j <= (10 + i - 1); j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }
    
    return 0;
}