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

int W(Node* root){
    int ans=0;
    if(root==NULL) return ans;
    queue <pair<Node* , int>> q;
    q.push({root,0});
    while(!q.empty()){
        int size=q.size();
        int mmin=q.front().second;
        int first,last;
        for(int i=0;i<size;i++){
            int curid=q.front().second-mmin;
            Node* root=q.front().first;
            q.pop();
            if(i==0)first=curid;
            if(i==size-1)last=curid;
            if(root->left) q.push({root->left,curid*2+1});
            if(root->right) q.push({root->right,curid*2+2});
        }
        ans=max(ans,last-first+1);
    }
    return ans;
}

int main(){
    cout<<"enter root : ";
    Node* root=buildTree();  
    int width=W(root);
    cout<<"The Width Of Tree = "<<width;
    return 0;
}