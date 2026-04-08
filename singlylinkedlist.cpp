#include<iostream>
using namespace std;
#include<map>
class Node{
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
      int value = this->data;
      if(this->next!=NULL) {
        delete next;
        this->next = NULL;
      }
      cout<<"memory free is "<<value<<endl;
    }
};

void insertathead(Node* &head,int d) {
    Node*temp = new Node(d);
    temp->next = head;
    head= temp;
}

void insertattail(Node* &tail,int d){
      Node* temp = new Node(d);
      tail->next = temp;
      tail=temp;
}

void insertatposition(Node* &tail , Node* &head,int positon,int d){
  Node* temp = head;
  int count =1;
  if(positon==1){
    insertathead(head,d);
    return;
  }
  
  while(count<positon-1){
    temp = temp->next;
    count++;
  }

  if(temp->next==NULL){
    insertattail(tail,d);
    return;
  }

  Node* nodetoinsert = new Node(d);
  nodetoinsert->next = temp->next;
  temp->next = nodetoinsert;
}

void deletenode(int position , Node* &head) {
  if(position == 1) {
    Node* temp = head;
    head = head->next;
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
    prev->next = curr->next;
    curr->next = NULL;
    delete curr; 
  }
}
void print(Node* &head) {
    Node* temp  = head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
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

bool hasCycle(Node *head) {
        if(head==NULL) {
            return false;
        }

        map<Node* , bool> visited;
        Node* temp = head;
        while(temp!=NULL) {
            if(visited[temp]==true) {
                return true;
            }
            visited[temp]=true;
            temp=temp->next;
        }
        return false;
}

Node* floydcycle(Node* head) {
           if(head==NULL) {
            return NULL;
          }

          Node* slow = head;
          Node* fast = head;
          

          while(slow!=NULL && fast!=NULL) {
            fast = fast->next;
            if(fast!=NULL) {
                fast=fast->next;
            }

            slow = slow->next;
            if(slow==fast) {
                return slow;
            }
          }
          return NULL;
}

Node* getstartnode(Node* head) {
       if(head==NULL) {
        return NULL;
       }

       Node* intersecetion = floydcycle(head);
        Node* slow = head;
        
        while(slow!=intersecetion) {
          slow = slow->next;
          intersecetion = intersecetion->next;
        }
        return slow;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertathead(head,12);
    insertathead(head,13);
    insertattail(tail,14);
    insertattail(tail,15);
    insertatposition(tail,head,3,22);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
    deletenode(4,head);
    print(head);
    tail->next = head->next;
    bool b = iscircular(tail);
    if(b) {
        cout<<"linked  is circular";
    }
    else {
        cout<<"linked  is not circular";
    }
    if(hasCycle(head)) {
      cout<<"print cycel is present"<<endl;
    } 
    else {
        cout<<"not present";
    }
   cout<<getstartnode(head)->data<<endl;

}

