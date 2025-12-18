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
        left=right=NULL;
    }
};

Node* buildTreeIP(vector<int> &I,int is,int ie,vector<int>& P,int ps,int pe, map <int,int> &hm){
    
    if(ps>pe || is>ie) return NULL;
    Node* root=new Node(P[pe]);
    int inroot=hm[P[pe]];
    int numsleft=inroot-is;
    root->left=buildTreeIP(I,is,inroot-1,P,ps,ps+numsleft-1,hm);
    root->right=buildTreeIP(I,inroot+1,ie,P,ps+numsleft,pe-1,hm);
    return root;
}

Node* buildTree(vector<int> &I,vector<int> &P){
    if(I.size()!=P.size()) return NULL;
    map<int,int> hm;
    for(int i=0;i<I.size();i++){
        hm[I[i]]=i;
    }
    return buildTreeIP(I,0,I.size()-1,P,0,P.size()-1,hm);
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
int main() {
    cout<<"enter noo. of elements : ";
    int n,e;
    cin>>n;
    cout<<"enter inorder : ";
    vector<int> I;
    for(int i=0;i<n;i++){
        cin>>e;
    I.push_back(e);
    }
    cout<<"enter post order : ";
    vector<int> P;
    for(int i=0;i<n;i++){
        cin>>e;
        P.push_back(e);
    }
    Node* root=buildTree(I,P);
    inorder(root);

    return 0;
}