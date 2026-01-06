// printing some pattern


#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the value of row: ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + j - 1;
            cout<<ch<<" ";
        }
        cout << endl;
    }
    
    return 0;
}