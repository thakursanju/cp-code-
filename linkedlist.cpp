#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with both data and next
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data (next = nullptr by default)
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert array to Linked List
Node* convertarrr2LL(vector<int> arr) {
    Node* head = new Node(arr[0]);  // Create first node
    Node* mover = head;             // Mover points to the last node

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);  // Create new node
        mover->next = temp;             // Link previous node to new node
        mover = temp;                   // Move 'mover' forward
    }

    return head;  // Return head of linked list
}
Node* temp=head;
Node* prev=NULL;

Node* inserthead(Node* head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    return newnode;
    // return new node(val,head);      
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertarrr2LL(arr);

    // Traverse the linked list
    Node* temp = head;
    //head=removeEL(head,8);
    head=inserthead(head,10);
    print(head);


    return 0;
}
