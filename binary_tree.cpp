#include<iostream>
using namespace std;
#include<queue>
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d) {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
    node* buildtree(node* root) {
        cout<<"enter the data:"<<endl;
        int  data;
        cin>>data;
        root=new node(data);
        if(data==-1) {
            return NULL;
        }
        cout<<"enter elment in left"<<data<<endl;
        root->left=buildtree(root->left);
        cout<<"enter elment in right"<<data<<endl;
        root->right=buildtree(root->right);
        return root;
    }
void levelordertraversal(node* root) {
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        node* temp=q.front();
         
        q.pop();
        if(temp==NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
        cout<<temp->data<<" ";
        if(temp->left) {
            q.push(temp->left);
        }
        if(temp->right) {
            q.push(temp->right);
        }
        }
    }
}
void inorder(node* root) {
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root) {
    if(root==NULL) {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(node* root) {
    if(root==NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
void buildfromlevelorder(node* &root) {
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp=q.front();
        q.pop();
        cout<<"enter left node for"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1) {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter right node for"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1) {
            temp->right=new node(rightdata);
            q.push(temp->right);

        }
    }
}
int main() {
    node* root=NULL;
    buildfromlevelorder(root);
    levelordertraversal(root);
    // root= buildtree(root);
    // levelordertraversal(root);
    // cout<<"inorder is"<<endl;
    // inorder(root);
    // cout<<"preorder is"<<endl;
    // preorder(root);
    // cout<<"postorder is"<<endl;
    // postorder(root);

    // 1  3  5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
}
// class Solution {
//   public:
//   void traverseleft(Node* root,vector<int> &ans) {
//     //   base case
//     if((root==NULL) && (root->left==NULL && root->right==NULL)) {
//         return;
//     }
//     ans.push_back(root->data);
//     if(root->left) {
//         traverseleft(root->left,ans);
//     }
//     else {
//         traverseleft(root->right,ans);
//     }
//   }
//   void traverseleaf(Node* root,vector<int> &ans) {
//       if(root==NULL) {
//           return;
//       }
//       if(root->left==NULL && root->right== NULL) {
//           ans.push_back(root->data);
//           return;
//       }
//       traverseleaf(root->left,ans);
//       traverseleaf(root->right,ans);
//   }
//   void traverseright(Node* root,vector<int> &ans) {
//        if((root==NULL) && (root->left==NULL && root->right==NULL)) {
//         return;
//     }
//     if(root->right)
//        traverseright(root->right,ans);
//     else
//         traverseright(root->left,ans);
        
//     ans.push_back(root->data);
//   }
//     vector<int> boundaryTraversal(Node *root) {
//         // code here
//         vector<int>ans;
//         if(root==NULL) {
//             return ans;
//         }
//         ans.push_back(root->data);
        
//         traverseleft(root->left,ans);
//         traverseleaf(root->left,ans);
//         traverseleaf(root->right,ans);
//         traverseright(root->right,ans);  
//         return ans;
//     }
// };  