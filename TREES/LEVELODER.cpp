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

vector<vector<int>> leveloder(Node* root){
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            Node* root=q.front();
            q.pop();
            if(root->left!=NULL)q.push(root->left);
            if(root->right!=NULL)q.push(root->right);
            level.push_back(root->data);
        }
        ans.push_back(level);
    }
    return ans;
}


int main(){
    
    cout<<"enter the value of root : ";
    Node* root=buildTree();
    cout<<"level oder traversal : ";
    vector<vector<int>> level =leveloder(root);
    for(const auto& row : level){
        for(int val : row){
            cout<<val<<" ";
        }
    }
    
    return 0;
}

