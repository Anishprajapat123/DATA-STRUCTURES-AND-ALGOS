// Online C++ compiler to run C++ program online
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

void preoder(Node* root){
    if(!root) return;
    cout<<root->data;
    preoder(root->left);
    preoder(root->right);
    
}

int main() {
    
    Node* root=buildTree();
    cout<<"preoder traversal : ";
    preoder(root);

    return 0;
    
}


