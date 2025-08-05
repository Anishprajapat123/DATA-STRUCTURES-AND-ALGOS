#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

Node* buildTree(){
    int val;
    cin>>val;
    if(val==-1) return nullptr;
    Node* root= new Node(val);
    cout<<"enter left child of "<<val<<" : ";
    root->left=buildTree();
    cout<<"enter right child of "<<val<<" : ";
    root->right=buildTree();
    return root;
}

void postoder(Node* root){
    if(!root) return;
    postoder(root->left);
    postoder(root->right);
    cout<<root->data;
}

int main(){
    cout<<"enter root value : ";
    Node* root=buildTree();
    cout<<"postoder traversal : ";
    postoder(root);
    
    return 0;
}


