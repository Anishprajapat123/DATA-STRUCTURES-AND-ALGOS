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
void recursion(Node* root,int level,vector<int> &ans){
    if(root==NULL) return;
    if(ans.size()==level) ans.push_back(root->data);
    recursion(root->right,level+1,ans);
    recursion(root->left,level+1,ans);
    
}

vector<int> RV(Node* root){
    vector<int> ans;
   recursion(root,0,ans);
   return ans;
}

int main() {
    cout<<"enter root : ";
    Node* root=buildTree();
    cout<<"right view of tree : ";
    vector<int> rightView=RV(root);
    for(int i=0;i<rightView.size();i++)
    cout<<rightView[i];
    return 0;
}