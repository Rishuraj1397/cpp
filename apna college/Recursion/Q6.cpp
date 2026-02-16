// sum of 1 to n numbers using recursion.  this is the parameterised way perform this addtion

#include <iostream>
using namespace std;

void Add(int i,int sum){
    if (i < 1)
    {
        cout<< sum <<endl;
        return;
    }
    Add(i-1, sum+i);
    
}

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    Add(n,0);
    return 0;
}