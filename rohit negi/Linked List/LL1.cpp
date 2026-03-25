#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL; 

    }
};
int main()
{
    //Static way of creating node
    // Node A1;
    // A1.data = 4;
    // A1.data = NULL;


    Node *Head;
    Head = new Node(4);

    cout<<Head->data<<endl;
    cout<<Head->next;
    
    return 0;
}