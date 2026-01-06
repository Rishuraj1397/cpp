#include<iostream>
using namespace std;

int main(){
    int ans=0, n, rem;
    cout<<"Enter a number: ";
    cin>>n;

    while (n>0)
    {
        rem = n % 10;
        n = n / 10;
        if ((ans>INT_MAX) || (ans<INT_MIN))
        {
            return 0;
        }
        
        ans = ans * 10 + rem;
    }
    cout<<ans<<endl;
    return 0;
}