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
};
bool isLeaf(Node* root){
    if(root->left==NULL && root->right==NULL) return true;
    else return false;
}

void addLeftBoundary(Node* root,vector<int> &ans){
    Node* cur=root->left;
    while(cur){
        if(!isLeaf(cur)) ans.push_back(cur->data);
        if(cur->left) cur=cur->left;
        else cur=cur->right;
    }
}
void addLeaves(Node* root,vector<int> &ans){
    if(isLeaf(root)) {ans.push_back(root->data) ; return;}
    if(root->left) addLeaves(root->left,ans);
    if(root->right) addLeaves(root->right,ans);
}
void addRightBoundary(Node* root,vector<int> &ans){
    Node* cur=cur->right;
    vector<int> temp;
    while(cur){
        if(!isLeaf(cur)) temp.push_back(cur->data);
        if(cur->right) cur=cur->right;
        else cur=cur->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
}

vector<int> b(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    if(!isLeaf(root)) ans.push_back(root->data);
    addLeftBoundary(root,ans);
    addLeaves(root,ans);
    addRightBoundary(root,ans);
    for(auto i : ans)
    cout<<i;
    return ans;
}

int main() {
    cout<<"enter root node : ";
   Node* root=buildTree();
   cout<<"Boundary Traversal : ";
   vector<int> Boundary=b(root);
   for(int i=0;i<Boundary.size();i++) cout<<Boundary[i];
    return 0;
}

