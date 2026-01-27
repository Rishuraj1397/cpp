#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 12, 32, 122, 78};
    int size = sizeof(arr) / sizeof(int);
    int target = 122;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index " << i << endl;
            break;
        }
        else if (i == size - 1)
        {
            cout << "Element not found" << endl;
        }
        
    }
    
    return 0;
}