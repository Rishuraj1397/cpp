#include<iostream>
using namespace std;

int main(){
    int n,rem,mul = 1,ans = 0;
    cout<<"Enter a number: ";
    cin>>n;

    while (n>0)
    {
        rem = n % 2;
        n = n / 2;
        ans = rem*mul+ans;
        mul = mul * 10;
    }
    cout<<"The binary representation of the number is: "<<ans<<endl;
    return 0;
}