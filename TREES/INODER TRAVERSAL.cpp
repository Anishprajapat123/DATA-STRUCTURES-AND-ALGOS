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
    Node* root=new Node(val);
    cout<<"enter left child of "<<val<<" : ";
    root->left=buildTree();
    cout<<"enter right child of "<<val<<" : ";
    root->right=buildTree();
    return root;
}

void inoder(Node* root){
    if(!root) return ;
    inoder(root->left);
    cout<<root->data;
    inoder(root->right);
}

int main(){
    cout<<"enter root value : ";
    Node* root=buildTree();
    cout<<"Inoder Traversal : ";
    inoder(root);
    return 0;
}


