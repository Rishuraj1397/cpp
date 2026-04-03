#include <iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    public:
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }


    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

int main() {
    vector<int> arr = {2, 3, 4, 5, 6};


    
    //Isme pehle hum node declare kiye orr fiir pointer to the memeory location ko store kiye staticlly
    // Node x = Node(arr[0],nullptr);
    // Node* y = &x;
    // cout << x.data; 


    
    // Same chiz jo upar do line ka code statically store krta hai wo yeah dynamicaly eak line me store kr rha hai
    Node* y = new Node(arr[0]);
    cout << y->next; //nullptr print hoga kyunki next pointer ko humne initialize nahi kiya hai



    return 0;
}