#include<iostream>
using namespace std;

int main(){
    int n,rem,ans = 0,mul = 1;
    cout<<"Enter a number: ";
    cin>>n;

    if(n==0){
        return 1;
    }
    while (n>0)
    {
        rem = n % 2;
        rem=rem^1;
        n = n / 2;
        ans = ans + rem* mul;
        mul = mul * 2;
    }
    cout<<"The complement of the number is: "<<ans<<endl;
    return 0;
}