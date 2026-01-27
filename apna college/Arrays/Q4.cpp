#include <iostream>
using namespace std;

void printIntersection(int a[], int n, int b[], int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 6, 7};
    int n = 5, m = 4;

    printIntersection(a, n, b, m);
    return 0;
}