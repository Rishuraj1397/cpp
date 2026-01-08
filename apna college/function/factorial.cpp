#include <iostream>
using namespace std;

//factorial of a number
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int main()
{
    cout<<factorial(5)<<endl;   
    cout<<"the factorial of 7 is: " <<factorial(7)<<endl;
    return 0;
}