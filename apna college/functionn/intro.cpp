#include <iostream>
using namespace std;


//Function ka definition
int  printhello()
{
    cout << "Hello\n";

    return 1;
}

int main()
{
    printhello();//this one will only print hello
    // int value = printhello();
    cout << printhello();//this one will print the return value also
    // cout << value;
    return 0;
}