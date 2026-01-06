// printing pattern


#include <iostream>
using namespace std;

int main() {
    int row,number;
    cout<<"Enter the value of row: ";
    cin>>row;
    cout<<"Enter the value of number: ";
    cin>>number;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<number<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}