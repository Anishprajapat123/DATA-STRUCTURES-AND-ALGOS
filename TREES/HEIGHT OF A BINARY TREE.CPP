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

int HeightOfABinaryTree(Node* root){
    if(root==NULL) return 0;
    int lh= HeightOfABinaryTree(root->left);
    int rh= HeightOfABinaryTree(root->right);
    return 1+max(lh,rh);
}

int main(){
    cout<<"enter root value : ";
    Node* root=buildTree();
    
    int height=HeightOfABinaryTree(root);
    cout<<"height of binary tree = "<<height;
    
    return 0;
}

