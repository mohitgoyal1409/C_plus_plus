#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        this->data = d;
        this->prev = NULL;
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

void print(Node* head) {
    Node* temp = head;
    while (temp!=NULL) 
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getlength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp!=NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(Node* &head,Node* &tail,int d) {
    if(head==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head= temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(Node* &head,Node* &tail,int d) {
    if(tail==NULL){
        Node* temp = new Node(d);
        tail=temp;
        head = temp;
    }
    else {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertatposition(Node* &tail , Node* &head,int positon,int d){
  Node* temp = head;
  int count =1;
  if(positon==1){
    insertathead(head,tail,d);
    return;
  }
  
  while(count<positon-1){
    temp = temp->next;
    count++;
  }

  if(temp->next==NULL){
    insertattail(head,tail,d);
    return;
  }

  Node* nodetoinsert = new Node(d);
  nodetoinsert->next = temp->next;
  temp->next->prev = nodetoinsert;
  temp->next = nodetoinsert;
  nodetoinsert->prev = temp;
}

void deletenode(int position , Node* &head) {
  if(position == 1) {
    Node* temp = head;
    temp->next->prev =  NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  else {
    Node* curr = head;
    Node* prev = NULL;
    
    int cnt  = 1;
    while(cnt<position) {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr; 
  }
}

int main() {
    // Node* node1 = new Node(10);
    Node* head  = NULL;
    Node* tail  = NULL;
    insertathead(head,tail,12);
    insertathead(head,tail,14);    
    print(head);
    insertattail(head,tail,25);
    print(head);
    insertatposition(tail,head,2,100);
    insertatposition(tail,head,1,101);
    // insertatposition(tail,head,7,102);
    print(head);
    deletenode(1,head);
    print(head);
    deletenode(3,head);
    print(head);
    deletenode(3,head);
    print(head);
    cout<<getlength(head)<<endl;
}