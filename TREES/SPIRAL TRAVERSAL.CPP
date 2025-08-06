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

vector<vector<int>> zigZag(Node* root){
    queue<Node*> q;
    vector<vector<int>> ans;
    if(!root) return ans;
    q.push(root);
    bool leftToRight=true;
    while(!q.empty()){
        int size=q.size();
        vector<int> row(size);
        for(int i=0;i<size;i++){
        Node* root=q.front();
        q.pop();
        int index=(leftToRight)?i:(size-1-i);
        row[index]=root->data;
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
        }
        leftToRight=!leftToRight;
        ans.push_back(row);
        
    }
    return ans;
}

int main() {
    cout<<"enter root node : ";
   Node* root=buildTree();
   cout<<"zig-zag traversal : ";
   vector<vector<int>>zigz= zigZag(root);
   for(int i=0;i<zigz.size();i++){
       for(int j=0;j<zigz[i].size();j++)
       {
           cout<<zigz[i][j];
       }
   }

    return 0;
}

