#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head = NULL;
    // Head = new Node(4);

    // cout<<Head->data<<endl;
    // cout<<Head->next;

    int arr[] = {2, 4, 6, 8, 10};

    //  Inserting the node at starting

    // in case of first element when there is no element in the linklist

    for (int i = 0; i < 5; i++)
    {
        {
            /* code */
        }

        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }

        // In case of if there is any elemnt in the linkedlist

        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }



    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}