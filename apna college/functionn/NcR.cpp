#include <iostream>
using namespace std;

//calculating the factorial
int fact(int n){
    int fact = 1;
    for ( int i = 1; i <=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    // cout<<fact(4);
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int nCr = nfact / (rfact * nrfact);
    cout <<"The value of ncr of "<< n << ", " << r <<" is " <<nCr << endl;
    return 0;
}