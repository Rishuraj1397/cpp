// checking conditions using if else
#include <bits/stdc++.h>
using namespace std;

int main() {
    int salary;
    cout<<"Enter the salary: ";
    cin>>salary;
    if(salary>=1000000){
        cout<<"I will accept the offer letter."<<endl;
    }
    else{
        cout<<"I will not accept the offer letter."<<endl;
    }
    return 0;
}