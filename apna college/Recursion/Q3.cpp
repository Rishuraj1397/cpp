// Printing from N to 1

#include <iostream>
using namespace std;

void print(int i){
    if(i < 1) return;
    cout << i << endl;
    print(i - 1);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    print(n);
}