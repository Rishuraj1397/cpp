// Print the pattern
#include <iostream>
using namespace std;

void Pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
}


void pattern2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
}

void pattern3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

void pattern4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
}

void pattern5(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < (n + 1 - i); j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
}


void pattern6(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < (n + 1 - i); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

void pattern7(int n){
    for (int i = 1; i <= n; i++)
    {
        // for space
        for (int j = 0; j < (n - i ); j++)
        {
            cout << " "<< " ";
        }
        
        //for star
        for (int j = 0; j < (2*i-1); j++)
        {
            cout << "*"<< " ";
        }
        


        // for space
        for (int j = 0; j < (n - i) ; j++)
        {
            cout << " "<< " ";
        }
        cout << endl;

    }
    
}

void pattern8(int n){
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " "<< " ";
        }
        
        //for star
        for (int j = 0; j < 2*n - (2*i+1); j++)
        {
            cout << "*"<< " ";
        }
        


        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " "<< " ";
        }
        cout << endl;

    }
    
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern7(n);
    pattern8(n);
    return 0;
}