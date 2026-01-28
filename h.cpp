#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(vector<int>& v)
{
    int start = 0;
    int end = v.size() - 1;

    while (start < end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

        start++;
        end--;
    }

    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};


    vector<int> reversed = reverseVector(v);

    for(int vector : v)
    {
        cout << vector << " ";
    }
    cout << endl;

    // for (int i = 0; i < reversed.size(); i++)
    //     cout << reversed[i] << " ";

    return 0;
}