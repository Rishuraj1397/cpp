#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int marks[size];
    for (int i = 0; i < size; i++)
    {
        cin>>marks[i];
    }
    

    int largest = INT_MIN;
    int index = -1;
    
    for (int i = 0; i < size; i++)
    {
        if (marks[i] > largest)
        {
            largest = marks[i];
            index = i;
        }
    }
    
    cout<<"The largest element in the array is: "<<largest<<endl;
    cout<<"The index of the largest element is: "<<index<<endl;
    return 0;
}