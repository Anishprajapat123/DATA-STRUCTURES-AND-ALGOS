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
}

Node* BuildTree(){
    int val;
    cin>>val;
    
    if(val==-1) return nullptr;
    
    Node* root= new Node(val);
    cout<<"enter left child of "<<val<<" : ";
    root->left=BuildTree();
    cout<<"enter right child of "<<val<<" : ";
    root->right=BuildTree();
    return root;
    
}

int main() {
    cout<<"enter tree nodes in Depth oder (USE -1 for NULL) : ";
    Node* root=BuildTree();
    return 0;
    
}
