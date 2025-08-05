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
    cout<<"enter left child of "<< val<<" : ";
    root->left=buildTree();
    cout<<"enter right child of "<<val<<" : ";
    root->right=buildTree();
    return root;
}
bool identical(Node* root1,Node* root2){
    if(root1==NULL || root2==NULL) return (root1==root2);
    return (root1->data == root2->data) && identical(root1->left,root2->left) && identical(root1->right,root2->right);
}

int main(){
    cout<<"enter root of Tree 1 : ";
    Node* root1=buildTree();
    cout<<"enter root of Tree 2 : ";
    Node* root2=buildTree();
    if(identical(root1,root2)) cout<<"identical trees";
    else cout<<"non identical trees";
    
    return 0;
}

