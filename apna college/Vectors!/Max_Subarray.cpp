#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};

    int n = sizeof(array) / sizeof(int);
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << array[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}