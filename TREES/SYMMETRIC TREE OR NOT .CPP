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
    Node* root=new Node(val);
    cout<<"enter left child of "<<val<<" : ";
    root->left=buildTree();
    cout<<"enter right child of "<<val<<" : ";
    root->right=buildTree();
    return root;
}
bool isSy(Node* left,Node* right){
    if(left==NULL || right==NULL) return left==right;
    if(left->data!=right->data) return false;
    return isSy(left->left,right->right) && isSy(left->right,right->left);
}

bool isSymmetric(Node* root){
    return root==NULL || isSy(root->left,root->right);
}

int main() {
    cout<<"enter root : ";
    Node* root=buildTree();   
    if(isSymmetric(root)){
        cout<<"The Tree Is Symmetric";
    }
    else{
        cout<<"it is not symmetric";
    }
    return 0;
}