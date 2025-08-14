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
    cout<<"enter left child "<< val<< " : ";
    root->left=buildTree();
    cout<<"enter right child "<<val<<" : ";
    root->right=buildTree();
    return root;
}
bool getPath(Node* root,vector<int> &ans,int nodeval){
    if(root== NULL) return false;
    ans.push_back(root->data);
    if(root->data== nodeval) return true;
    if(getPath(root->left,ans,nodeval) || getPath(root->right,ans,nodeval)) return true;
    ans.pop_back();
    return false;
}

vector<int> RToN(Node* root,int nodeval){
    vector<int> ans;
    if(root==NULL) return ans;
    getPath(root,ans,nodeval);
    return ans;
    
}

int main(){
    cout<<"enter root : ";
    Node* root=buildTree();
    cout<<"enter node value : ";
    int nodeval;
    cin>>nodeval;
    vector<int> rootToNode=RToN(root,nodeval);
    cout<<"the path from root -> "<<nodeval<<" = ";
    for(auto i:rootToNode) cout<<i;
    return 0;
}