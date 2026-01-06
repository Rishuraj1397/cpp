// printing pattern

#include <bits/stdc++.h>
using namespace std;

int main() {
    int row,coloumn;
    cout<<"Enter the value of row: ";
    cin>>row;
    cout<<"Enter the value of coloumn: ";
    cin>>coloumn;
    for (int i = 1; i <= row; i++)
    {
        for (int j = coloumn; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}