// circulaar linkekd list question 1
// #include<iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node* next;

//     node(int data) {
//         (*this).data=data;
//         (*this).next=NULL;
//     }

//     ~node() {
//         int value= (*this).data;
//         // memory free
//         if((*this).next!=NULL) {
//             delete next;
//             (*this).next=NULL;
//         }
//         cout<<"free memory for node value"<<value<<endl;
//     }
// };

// void insertnode(node* &tail,int element,int d) {
//     if(tail==NULL) {
//         node* newnode=new node(d);
//         tail=newnode;
//         newnode->next=newnode;
//     }
//     else {

//         node* curr = tail;
//         while(curr->data!=element) {
//             curr=curr->next;
//         }
//         node* temp=new node(d);
//         temp->next=curr->next;
//         curr->next=temp;
//     }
// }
// void print(node* &tail) {
//     node* temp = tail;
//     do {
//         cout<<tail->data<<" ";
//         tail=tail->next; 
//     }while(tail!=temp);
//     cout<<endl;
// }

// bool iscircular(node* head) {
//     if(head==NULL) {
//         return true;
//     }
//     node* temp=head->next;
//     while(temp!=NULL && temp!=head) {
//         temp=temp->next;
//     }
//     if(temp==NULL) return false;
//     if(temp==head) return true;
// }
// int main() {
     
//     node* tail=NULL;
//     insertnode(tail,5,3);
//     print(tail);
//     insertnode(tail,3,6);
//     print(tail);
//     insertnode(tail,6,8);
//     print(tail);
//     insertnode(tail,3,4);
//     print(tail);
//     bool b= iscircular(tail);
//     cout<<b<<endl;
    
// }

// single linked list question 
#include<iostream>
#include<map>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int data) {
        (*this).data=data;
        (*this).next=NULL;
    }

    ~node() {
        int value= (*this).data;
        // memory free
        if((*this).next!=NULL) {
            delete next;
            (*this).next=NULL;
        }
        cout<<"free memory for node value"<<value<<endl;
    }
};

void inserthead(node* &head ,int d) {
    node* temp = new node(d);
    (*temp).next=head;
    head=temp;
}


void inserttail(node* &tail ,int d) {
    node* temp = new node(d);
    (*tail).next=temp;
    tail=temp;
}

void insertposition(node* &tail , node* &head,int postion,int d) {

    // insertion at starting
    if(postion==1) {
        inserthead(head,d);
        return;
    }

    node* temp= head;
    int cnt=1;
    while(cnt <postion-1) {
        temp=(*temp).next;
        cnt++;
    }
    
    if((*temp).next ==NULL) {
        inserttail(tail,d);
        return;
    }


    // creating a node for d
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

bool detectloop(node* head) {
    if(head==NULL) return false;

    map<node*,bool> visited;
    node* temp=head;

    while(temp!=NULL) {
        if(visited[temp]==true) {
            cout<<"loop is present on element "<<temp->data<<endl;
            return true;
    }
    visited[temp]=true;
    temp=temp->next;

} 
return false;
}
void print(node* &head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<(*temp).data<<" ";
        temp= (*temp).next;
    }
    cout<<endl;
}

node* floyddetectloop(node* head) {
    if(head==NULL) {
        return NULL;
    }

    node* slow=head;
    node* fast=head;
    while(slow!=NULL && fast!=NULL) {
        fast=fast->next;
        if(fast!=NULL) {
        fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast) {
            return slow;
        }
    }
    return NULL;
}

node* getstartingnode(node* head) {
    if(head==NULL) {
        return NULL;
    }
    node* intersection=floyddetectloop(head);
    node* slow=head;
    while (slow!=intersection) 
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
    
}
void removecycle(node* head) {
    if(head==NULL) {
        return;
    }
    node* startloop=getstartingnode(head);
    node* temp = startloop;
    while(temp->next!=startloop) {
        temp=temp->next;
    }
    temp->next=NULL;
}
 
int main() {
     
    // creation a new node
    node* a=new node(10);
    // heading pointer to a
    node* head=a;
    node* tail= a;
    print(head);
    inserttail(tail,12);
    print(head);
    inserttail(tail,15);
    print(head);
    insertposition(tail,head,1,22);
    print(head);
    tail->next=head->next;
    bool b= detectloop(head);
    cout<<b<<endl;
    if(floyddetectloop(head)!=NULL) {
        cout<<"cycle is present";
    }
    else {
        cout<<"cycle is not present";
    }

    node* loop = getstartingnode(head);
    cout<<"starting at "<<loop->data<<endl;

    removecycle(head);
    print(head);
    // del(4,hea d);
    // print(head);

     
}