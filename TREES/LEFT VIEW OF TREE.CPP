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
    recursion(root->left,level+1,ans);
    recursion(root->right,level+1,ans);
    
}

vector<int> LV(Node* root){
    vector<int> ans;
   recursion(root,0,ans);
   return ans;
}

int main() {
    cout<<"enter root : ";
    Node* root=buildTree();
    cout<<"right view of tree : ";
    vector<int> leftView=LV(root);
    for(int i=0;i<leftView.size();i++)
    cout<<leftView[i];
    return 0;
}