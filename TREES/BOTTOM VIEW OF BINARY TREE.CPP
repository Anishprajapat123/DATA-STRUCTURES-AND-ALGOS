#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data= val;
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

vector<int> TOPVIEW(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    map<int,int> mpp;
    queue <pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int line=it.second;
         mpp[line]=node->data;
        if(node->left) q.push({node->left,line-1});
        if(node->right) q.push({node->right,line+1});
    }
    for(auto it: mpp)
    ans.push_back(it.second);
    return ans;
}

int main(){
    cout<<"enter the root : ";
    Node* root=buildTree();
    cout<<"top view of tree : ";
    vector<int> topView=TOPVIEW(root);
    for(auto it: topView)
    cout<<it;
    return 0;
}
