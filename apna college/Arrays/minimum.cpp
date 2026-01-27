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
    

    int smallest = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < size; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
            index = i;
        }
    }
    
    cout<<"The smallest element in the array is: "<<smallest<<endl;
    cout<<"The index of the smallest element is: "<<index<<endl;
    return 0;
}