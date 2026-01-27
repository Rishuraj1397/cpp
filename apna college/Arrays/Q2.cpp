#include <iostream>
#include <climits>
using namespace std;

int maxIndex(int arr[], int n)
{
    int max = INT_MIN;
    int index = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int minIndex(int arr[], int n)
{
    int min = INT_MAX;
    int index = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    int max_index = maxIndex(arr, size);
    int min_index = minIndex(arr, size);

    swap(arr[max_index], arr[min_index]);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}