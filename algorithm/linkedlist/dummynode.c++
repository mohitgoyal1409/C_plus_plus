// sum of two linked list

#include<iostream>
using namespace std;

class Node {
    
    public:
    int data;
    Node* next;

public:
    Node() : data(0), next(nullptr) {}
};

Node* twosum(Node* head1 , Node* head2) {
    Node* dummy = new Node();
    dummy->data = -1;
    Node* current = dummy;
    int carry = 0;

    Node* temp = head1;
    Node* temp2 = head2;

    while(temp!=NULL || temp2!=NULL) {
        int sum = carry;
        if(temp) {
            sum = sum + temp->data;
        }
        if(temp2) {
            sum = sum + temp2->data;
        }

        Node* newnode = new Node();
        newnode->data = sum%10;
        carry = sum/10;
        current->next = newnode;
        current = newnode;

        if(temp) {
            temp = temp->next;
        }
        if(temp2) {
            temp2 = temp2->next;
        }
    }

    if(carry > 0) {
       Node* newnode = new Node();
         newnode->data = carry;
       current->next = newnode;
    }
   return dummy->next;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    Node *head1 = NULL;
    Node *head2 = NULL;
    
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
            current = newNode;
            }
        i++;
    }

    i = 0;
    while(i<n2) {
        int value;
        cin >> value;
        Node* newNode = new Node(); 
        newNode->data = value;
        if (head2 == NULL) {
            head2 = newNode;
        } else {
            Node  *current = head2;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            current = newNode;
            }
        i++;
    }

    Node* result = twosum(head1, head2);
    while(result != NULL) {
        cout << result->data << " ";
        result = result->next;
    }

    return 0;
}