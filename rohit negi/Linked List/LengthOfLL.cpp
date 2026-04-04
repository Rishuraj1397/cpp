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

Node* convertArr2LL(vector<int> arr) {
    if (arr.empty()) {
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
};

int lengthOfLL(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

int checkifpresent(Node* head, int key) {
    Node* temp = head;
    while(temp){
        if(temp->data == key){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}


int main(){
    vector<int> arr = {12, 5, 6, 8, 7};
    Node* head = convertArr2LL(arr);
    // cout << "Length of Linked List is : " << lengthOfLL(head) << endl;
    cout << checkifpresent(head, 9) << endl;
    return 0;
}