#include <iostream>
using namespace std;


//function which take parameters
// sum of two number

int sum(int a, int b)
{
    int c = a + b;
    return c;
}


//minimum of two number
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    sum(3,4); //function call
    cout << min(3,4)<< endl; //function call using passing argument
    

    cout << "The sum of " << 3 << " and " << 4 << " is: " << sum(3, 4) << endl;
    return 0;
}