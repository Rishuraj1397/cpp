// printing pattern

#include <iostream>
using namespace std;

int main() {
    int row,num;
    cout<<"Enter the value of row: ";
    cin>>row;
    num = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout<<num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
    
    return 0;
}