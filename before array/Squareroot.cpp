#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){
        cout<<"Invalid input"<<endl;
        return 0;
    }

    int i=0;
    while(i*i <= n){
        i++;
    }
    cout<<"The square root of "<<n<<" is "<<i-1<<endl;
    return 0;
}