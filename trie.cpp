#include<iostream>
using namespace std;

class trienode{
    public:
    char data;
    trienode* children[26];
    bool isterminal;

    trienode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal=false;
    }
};

class trie{
    public:
    trienode* root;

    trie(){
        root=new trienode('\0');
    }
    void insertutil(trienode* root,string word) {
        // base case
        if(word.length()==0){
            root->isterminal=true;
            return ;
        }

        int index = word[0]-'A';
        trienode* child;

        if(root->children[index]!=NULL) {
            child=root->children[index];
        }
        else {
            child = new trienode(word[0]);
            root->children[index]=child;
        }

        insertutil(child,word.substr(1));
    }
    void insertword(string word){
        insertutil(root,word);
    }
    bool searachutil(trienode* root , string word) {
        if(word.length()==0) {
            return root->isterminal;
        }
        int index=word[0]-'A';
        trienode* child;
        
        if(root->children[index]!=NULL) {
            child =  root->children[index];
        }
        else {
            return false;
        }

        return searachutil(child,word.substr(1));
    }
    bool searchword(string word){
        return searachutil(root,word);
    }
};

int main() {
    trie *t=new trie();
    t->insertword("ARM");
    t->insertword("DO");
    t->insertword("TIME");
    cout<<"present or not"<<t->searchword("TIM")<<endl;
} 