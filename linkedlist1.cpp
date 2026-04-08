// #include<iostream>
// using namespace std;

// class node {
//     public:
//     int val;
//     node* next;
//     node(int val) {
//         (*this).val=val;
//         (*this).next=NULL;
//     }

// };
// int main() {
//     node a(10);
//     node b(20);
//     node c(30);
//     node d(40);
//     // cout<<&a<<endl;
//     a.next=&b;
//     b.next=&c;
//     c.next=&d;
//     // cout<<a.next<<endl;
//     // cout<<&b<<endl;
//     // cout<<(*((*(a.next)).next)).val;
//     // cout<<(*((*(a.next)).next)->next).val;
    // node temp=a; //this temp=a mean temp ka ek node ban gya or usme a ke data me or a ke next me jo hai vo chala gya   
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next==NULL) break;
//         temp=*(temp.next);
//     }

// }

// dynamaically linked list
#include<iostream>
using namespace std;

class node {
    public:
    int val;
    node* next;
    node(int val) {
        (*this).val=val;
        (*this).next=NULL;
    }

};

void print(node* head){
       node* temp = head; //temp store the address of a node
       while(temp!=NULL) {
         cout<<(*temp).val<<" ";
         temp=(*temp).next; // same as temp=temp->next
    }
}

void size(node* head) {
       node* temp = head; //temp store the address of a node
       int n=0;
       while(temp!=NULL) {
        n++;
        temp=(*temp).next; // same as temp=temp->next
    }
    cout<<n;
}
int main() {
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    (*a).next=b;
    b->next=c;
    c->next=d;
    // cout<<(*a).val<<" ";
    // cout<<(a->next)->val;
    // cout<<a->next->next->next->val;
    print(a);
    size(a);  
    // node* temp = a; //temp store the address of a node
    // while(temp!=NULL) {
    //     cout<<(*temp).val<<" ";
    //     temp=(*temp).next; // same as temp=temp->next
    // }

}
