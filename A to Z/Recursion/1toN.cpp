// Printing 1 to n using recursion

#include <iostream>
using namespace std;




void N(int i, int n){
    if(i > n){
        return;
    }
    else{
        cout << i << endl;
        i++;
        N(i, n);
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    N(1,n);
    
    return 0;
}