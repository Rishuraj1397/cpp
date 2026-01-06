    // Printing some pattern

    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int row,coloumn;
        cout<<"Enter the value of row: ";
        cin>>row;
        cout<<"Enter the value of coloumn: ";
        cin>>coloumn;

        for (int i = 0; i < row; i++)
        {
            char ch = 'F';
            for (int j = 0; j < coloumn; j++)
            {
                ch = 'F' + j;
                cout << ch << " ";
            }
            cout << endl;
        }

        return 0;
    }