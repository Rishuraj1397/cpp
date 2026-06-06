// Priinting name N times using recursion

#include <iostream>
using namespace std;


void name(int i, int n){
    if (i > n)
    {
        return;
    }else{
        cout << "Rishu" << endl;
        i++;
        name(i, n);
    }
    
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    name(1, n);
    return 0;
}