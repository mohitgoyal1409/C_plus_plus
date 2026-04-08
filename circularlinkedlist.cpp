#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int val = this->data;
        if(next!=NULL) {
            delete next;
            next = NULL;
        }
        cout<<"memory free is "<<val<<endl;
    }
};

void insertnode(Node* &tail,int element,int d) {
    if(tail == NULL) {
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else {
        Node* curr =  tail;
        while(curr->data!=element) {
            curr = curr ->next;
        }

         Node* temp = new Node(d);
         temp->next = curr ->next;
         curr->next = temp;
    }
}

void deletenode(Node* &tail,int value) {
    if(tail == NULL) {
        cout<<"list is empty"<<endl;
        return;
    }
    else {
        Node* prev = tail;
        Node* curr = prev->next;
        
        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if(curr==prev) {
            tail = NULL;
        }

        else if(tail == curr) {
            tail = prev->next;
        }
        
        curr->next = NULL;
        delete curr;
    }
}
void print(Node* tail) {
    if(tail==NULL) {
        cout<<"list is empty"<<endl;
    }
    Node* temp = tail;
    do {
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;                

}

bool iscircular(Node* head) {
    if(head==NULL){
        return true;
    }

    Node* temp = head->next;
    while(temp!=NULL && temp!=head) {
        temp = temp->next;
    }

    if(temp==head) {
        return true;
    }

    return false;

}

int main() {
    Node* tail = NULL;
    // insertnode(tail,0,3);
    // print(tail);
    // insertnode(tail,3,5);
    // print(tail);
    // insertnode(tail,5,7);
    // print(tail);
    // insertnode(tail,7,9);
    // print(tail);
    // insertnode(tail,5,6);
    // print(tail);
    // insertnode(tail,9,10);
    // print(tail);
    // insertnode(tail,3,4);
    // print(tail);
    // deletenode(tail,3);
    // print(tail);
    // deletenode(tail,10);
    // deletenode(tail,3);
    // print(tail);
     
    bool b = iscircular(tail);
    if(b) {
        cout<<"linked list is circular";
    }
    else {
        cout<<"linked list is not circular";
    }

   
   
    return 0;

}