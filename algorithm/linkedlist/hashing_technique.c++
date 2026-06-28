#include <bits/stdc++.h>
using namespace std;
#include <unordered_map>


class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x){
        val=x;
        next=NULL;
        random=NULL;
    }
};

 
Node* copyRandomList(Node* head) {

    if(head==NULL)
        return NULL;

    unordered_map<Node*,Node*> mp;

    Node* temp=head;

    // Create copy nodes
    while(temp){

        mp[temp]=new Node(temp->val);

        temp=temp->next;
    }

    temp=head;

    // Connect next and random
    while(temp){

        mp[temp]->next=mp[temp->next];

        mp[temp]->random=mp[temp->random];

        temp=temp->next;
    }

    return mp[head];
}



int  main() {
    int n;
    cin>>n;
    Node* head=NULL;
    int i=0;
    while(i<n) {
        int value;
        cin>>value;
        Node* newNode=new Node(value);
        if(head==NULL) {
            head=newNode;
        } else {
            Node* temp=head;
            while(temp->next!=NULL) {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        i++;
    }

    Node* result=copyRandomList(head);
    cout<<result->val<<endl;
}