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

int main() {
    vector<int> arr = {12, 5, 6, 8, 7};
    Node* head = convertArr2LL(arr);
    cout <<head->data;
}