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
    cout<<"enter left child "<<val<<" : ";
    root->left=buildTree();
    cout<<"enter right child "<<val<<" : ";
    root->right=buildTree();
    return root;
}


vector<vector<int>> votvrsl(Node* root){
    map<int,map<int,multiset<int>>> nodes;
    queue <pair<Node*,pair<int,int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        Node* root=p.first;
        int x=p.second.first;
        int y=p.second.second;
        nodes[x][y].insert(root->data);
        if(root->left)
        q.push({root->left,{x-1,y+1}});
        if(root->right)
        q.push({root->right,{x+1,y+1}});
    }
    vector<vector<int>> ans;
    for(auto p:nodes){
        vector<int> col;
        for(auto q:p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}

int main(){
    cout<<"enter root : ";
    Node* root=buildTree();
    cout<<"vertical oder traversal : ";
    vector<vector<int>> vot=votvrsl(root);
    for(int i=0;i<vot.size();i++){
        for(int j=0;j<vot[i].size();j++){
            cout<<vot[i][j]<<" ";
        }
    }
    
    return 0;
}

