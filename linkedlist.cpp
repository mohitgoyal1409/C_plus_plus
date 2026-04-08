// #include<iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node* next;

//     node(int data) {
//         (*this).data=data;
//          (*this).next=NULL;
//     }
// };

// // void inserthead(node* &head ,int d) {
// //     node* temp1 = new node(d);
// //     (*temp1).next=head;
// //     head=temp1;
// // }

// // void print(node* &head) {
// //     node* temp = head;
// //     while(temp!=NULL) {
// //         cout<<(*temp).data<<" ";
// //         temp= (*temp).next;
// //     }
// //     cout<<endl;
// // }
// // int main() {
     
// //     // creation a new node
// //     node* a=new node(10);
// //     // cout<<(*a).data<<endl;
// //     // cout<<(*a).next<<endl;

// //     // heading pointer to a
// //     node* head=a;
// //     print(head);
// //     inserthead(head,12);
// //     print(head);
// //}

#include<iostream>
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

void del(int position,node* &head) {
    if(position==1) {
       node* temp=head;
       head=(*head).next;
       temp->next=NULL;
       delete temp;
    }
    else {
        node* prev=NULL;
        node* curr=head;
        int cnt=1;
        while(cnt<position) {
            prev = curr;
            curr=(*curr).next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

void print(node* &head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<(*temp).data;
        temp= (*temp).next;
    }
    cout<<endl;
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
    // del(4,head);
    // print(head);

     
}


// DOUBLE LINKED LIST
// #include<iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node* prev;
//     node* next;

//     node(int data) {
//         (*this).data=data;
//          (*this).prev=NULL;
//          (*this).next=NULL;
//     }
// };

// void print(node* &head) {
//     node* temp = head;
//     while(temp!=NULL) {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// void insertathead(node* &head,int d) {
//     node* temp = new node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }

// void insertattail(node* &tail ,int d ) {
//     node* temp=new node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;
// }

// void insertatposition(node* &tail ,node* &head , int position,int d) {
//     // insertion at starting
//     if(position==1) {
//         insertathead(head,d);
//         return;
//     }
//     node* temp= head;
//     int cnt=1;
//     while(cnt <position-1) {
//         temp=(*temp).next;
//         cnt++;
//     }
    
//     if((*temp).next ==NULL) {
//         insertattail(tail,d);
//         return;
//     }


//     // creating a node for d
//     node* nodetoinsert=new node(d);

//     nodetoinsert->next=temp->next;
//     temp->next->prev=nodetoinsert;
//     temp->next=nodetoinsert;
//     nodetoinsert->prev=temp;

    
// }

// int main() {
//     node* a = new node(10);
//     node* head=a;
//     node* tail=a;
//     print(head); 
//     insertathead(head,12);
//     print(head);
//     insertathead(head,15);
//     print(head);
//     insertattail(tail,25);
//     print(head);
//     insertatposition(tail,head,3,22);
//     print(head);

// }


// #include<iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node* prev;
//     node* next;

//     node(int data) {
//         (*this).data=data;
//          (*this).prev=NULL;
//          (*this).next=NULL;
//     }
//     ~node() {
//         int value= (*this).data;
//         // memory free
//         if(next!=NULL) {
//             delete next;
//             next=NULL;
//         }
//         cout<<"free memory for node value"<<value<<endl;
//     }

// };

// void print(node* &head) {
//     node* temp = head;
//     while(temp!=NULL) {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// void insertathead(node* &tail,node* &head,int d) {
//     if(head==NULL) {
//         node* temp=new node(d);
//         head= temp;
//         tail=temp;
//     }
//     else {
//     node* temp = new node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }
// }

// void insertattail(node* &head, node* &tail ,int d ) {
//     if(tail==NULL) {
//         node* temp=new node(d);
//         tail=temp;
//         head= temp;
//     }
//     else {
//     node* temp=new node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;
// }
// }
// void insertatposition(node* &tail ,node* &head , int position,int d) {
//     // insertion at starting
//     if(position==1) {
//         insertathead(tail,head,d);
//         return;
//     }
//     node* temp= head;
//     int cnt=1;
//     while(cnt <position-1) {
//         temp=(*temp).next;
//         cnt++;
//     }
    
//     if((*temp).next ==NULL) {
//         insertattail(head, tail,d);
//         return;
//     }


//     // creating a node for d
//     node* nodetoinsert=new node(d);

//     nodetoinsert->next=temp->next;
//     temp->next->prev=nodetoinsert;
//     temp->next=nodetoinsert;
//     nodetoinsert->prev=temp;

    
// }

// void del(int position,node* &head) {
//     if(position==1) {
//        node* temp=head;
//        temp->next->prev=NULL;
//        head=temp->next;
//        temp->next=NULL;
//        delete temp;
//     }
//     else {
//         node* prev=NULL;
//         node* curr=head;
//         int cnt=1;
//         while(cnt<position) {
//             prev = curr;
//             curr=(*curr).next;
//             cnt++;
//         }
//         curr->prev=NULL;
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;

//     }
// }

// int main() {
    
//     node* head=NULL;
//     node* tail=NULL;
//     print(head);  
//     insertathead(tail,head,12);
//     print(head);
//     insertathead(tail,head,15);
//     print(head);
//     insertattail(head,tail,25);
//     print(head);
//     insertatposition(tail,head,3,22);
//     print(head);
//     del(3,head);
//     print(head);
// }


// CIRCULAR LINKED LIST
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

// void del(node* &tail,int value) {
//     if(tail==NULL) {
//         cout<<"list is empty";
//         return;
//     }
//     else {
//         node* prev=tail;
//         node* curr=prev->next;
//         while(curr->data!=value) {
//             prev=curr;
//             curr=curr->next;
//         }
//         prev->next=curr->next;
//         if(tail==curr) {
//             tail=prev;
//         }
//         curr->next=NULL;
//         delete curr;
//     }
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
//     del(tail,4);
//     print(tail);
    
// }
