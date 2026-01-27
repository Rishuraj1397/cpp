#include <iostream>
using namespace std;

void printUnique(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    printUnique(arr, n);
    return 0;
}