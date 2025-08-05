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

int height(Node* root,int &maxi){
    if(root==NULL) return 0;
    int lsum=height(root->left,maxi);
    int rsum=height(root->right,maxi);
    maxi=max(maxi,lsum+rsum+root->data);
    return root->data + max(lsum,rsum);
}

int maxpathsum(Node* root){
    int maxi=0;
    int h=height(root,maxi);
    return maxi;
}

int main(){
    Node* root=buildTree();
    int maximum=maxpathsum(root);
    cout<<"maximum path sum = "<<maximum;
    return 0;
    
}

