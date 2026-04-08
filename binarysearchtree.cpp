#include<iostream>
#include<queue>
using namespace std;
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
node* insertintobst(node* root,int d) {
    if(root==NULL) {
        root=new node(d);
        return root;
    }
    if(d>root->data) {
        root->right=insertintobst(root->right,d);
    }
    else {
        root->left=insertintobst(root->left,d);
    }
    return root;
}
node* minval(node* root) {
    node* temp=root;
    while(temp->left!=NULL) {
        temp=temp->left;
    }
    return temp;
}
node* maxval(node* root) {
    node* temp=root;
    while(temp->right!=NULL) {
        temp=temp->right;
    }
    return temp;
}
node* deletefrombst(node* root,int val) {
    if(root==NULL) {
        return root;
    }
    if(root->data==val) {
        // 0 child
        if(root->left==NULL && root->right==NULL) {
            delete root;
            return NULL;
        }
        // left child
        if(root->left!=NULL && root->right==NULL) {
            node* temp=root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left==NULL && root->right!=NULL) {
            node* temp=root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL) {
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deletefrombst(root->right,mini);
            return root;
        }



    }
    else if(root->data>val) {
        root->left=deletefrombst(root->left,val);
        return root;
    }
    else {
        root->right=deletefrombst(root->right,val);
        return root;
    }
}

void takeinput(node* &root) {
    int data;
    cin>>data;
    while(data!=-1) {
        root=insertintobst(root,data);
        cin>>data;     
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
int main(){
    node* root=NULL;
    cout<<"enter data to create bst"<<endl;
    takeinput(root);
    levelordertraversal(root);
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<"postorder"<<endl;
    postorder(root);
    node* ans=minval(root);
    cout<<ans->data;
    node* anss=maxval(root);
    cout<<anss->data;
    root=deletefrombst(root,30);
    cout<<"enter data to create bst"<<endl;
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<"postorder"<<endl;
    postorder(root);
    cout<<minval(root)->data;
    // cout<<ans->data;
    cout<<maxval(root)->data;
    // cout<</anss->data;
}