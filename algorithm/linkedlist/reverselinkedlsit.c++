#include<iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node() : data(0), next(nullptr) {}
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the link
        prev = current;       // Move prev to current
        current = next;       // Move to the next node
    }

    return prev; // New head of the reversed list
}
int main() {
    int n1;
    cin>>n1;
    Node *head1 = NULL;
    int i = 0;
    while(i<n1) {
        int value;
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        if (head1 == NULL) {
            head1 = newNode;
        } else {
            Node *current = head1;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
        i++;
    }
    
    Node* result = reverseLinkedList(head1);
    while (result != NULL) {
        cout << result->data << " ";
        result = result->next;
    }   

}