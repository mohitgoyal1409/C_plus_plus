#include<iostream>
using namespace std;
class Node {
    
    public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

Node* mergeSortedLists(Node* head1, Node* head2) {
     if(head1 == nullptr) {
        return head2;
     }
    if(head2 == nullptr) {
        return head1;
    }
    
    Node* curr1 = head1;
    Node* curr2 = head2;
    Node* next1 = curr1->next;
    Node* next2 = NULL;  

    while(next1 !=NULL && curr2 != nullptr ) {
        if(curr2->data >= curr1->data && curr2->data <= next1->data) {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }

        else {
            curr1 = next1;
            next1 = next1 -> next;
            while(next1 == NULL) {
                curr1->next = curr2;
                return head1;
            }
        }
    }

    return head1;
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
        Node* newNode = new Node(value);
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

    i = 0;
    while(i<n2) {
        int value;
        cin >> value;
        Node* newNode = new Node(value);
        if (head2 == NULL) {
            head2 = newNode;
        } else {
            Node *current = head2;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
        i++;
    }
    Node* result = nullptr;
    if(head1->data <= head2->data) {
        result = mergeSortedLists(head1, head2);
     }
     else {
        result = mergeSortedLists(head2, head1);
     }

    while (result != NULL) {
        cout << result->data << " ";
        result = result->next;
    }
    cout << endl;

}