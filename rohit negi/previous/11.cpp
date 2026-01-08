// Printing all the even number upto 20
#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl;
    }


    // Alternative method: Iterate through all numbers from 1 to 20 and print if even.
    for (int i = 1; i <= 20; ++i)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
