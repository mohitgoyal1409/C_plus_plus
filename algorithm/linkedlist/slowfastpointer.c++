#include<iostream>
using namespace std;

class linkedlist {
    public:
    int data;
    linkedlist* next;
public:
    linkedlist() : data(0), next(nullptr) {}
};

int main() {
    int n;
    cin >> n;

    linkedlist *head = NULL;
    int i = 0;
    while(i<n) {
        int value;
        cin >> value;
        linkedlist* newNode = new linkedlist(); 
        newNode->data = value;
        if (head == NULL) {
            head = newNode;
        } else {
            linkedlist *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            current = newNode;
            
            }
        i++;
    }
    linkedlist *slow = head;
    linkedlist *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Slow pointer: " << slow->data << endl;
    cout << "Fast pointer: " << fast->data << endl;
     
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    cout << "Meeting point: " << slow->data << endl;
    return 0;
}