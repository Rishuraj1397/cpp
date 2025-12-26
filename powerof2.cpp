#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if (n<=0) {
        cout<<"Negative numbers cannot be powers of 2"<<endl;
        return 0;
    }
    while (n!=1)
    {
        if (n%2 == 1 ) {
            cout<<"The number is not a power of 2"<<endl;
            return 0;
        }
        n = n / 2;
    }
    cout<<"The number is a power of 2"<<endl;
    return 0;
}