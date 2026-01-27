#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}

int prod(int a[], int n)
{
    int pro = 1;
    for (int i = 0; i < n; i++)
    {
        pro *= a[i];
    }
    return pro;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << "Sum: " << sum(arr, size) << endl;
    cout << "Product: " << prod(arr, size) << endl;
    return 0;
}