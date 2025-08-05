
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data ;
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
};

int h(Node* root,int& diameter){
    if(root==NULL) return 0;
    int lh=h(root->left,diameter);
    int rh=h(root->right,diameter);
    diameter=max(diameter,lh+rh);
    return 1+max(lh,rh);
}

int diameterofATree(Node* root){
    int diameter=0;
    int height=h(root,diameter);
    return diameter;
}



int main() {
   Node* root=buildTree();
   int dia=diameterofATree(root);
    cout<<"the diameter of a tree = "<<dia;
    return 0;
}