#include <iostream>
using namespace std;

//Sum of numbers upto n
int sum(int n){
    int s = 0;
    for(int i=1;i<=n;i++){
        s = s + i;
    }
    return s;
}
int main()
{
    sum(5);
    cout<<sum(5)<<endl;   
    sum(10);
    cout<<"the sum of 1 to 10 is: " <<sum(10)<<endl;
    return 0;
}