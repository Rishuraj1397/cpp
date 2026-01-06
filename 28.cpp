// printing pattern

#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cout<<"Enter the value of row: ";
    cin>>row;
    char ch = 'A';
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    
    return 0;
}