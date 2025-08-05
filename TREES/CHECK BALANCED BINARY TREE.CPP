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
     Node* root= new Node(val);
     cout<<"enter left child of "<<val<<" : ";
     root->left=buildTree();
     cout<<"enter right child of "<<val<<" : ";
     root->right=buildTree();
     
     return root;
 };

 int heightt(Node* root){
     if(root==NULL) return 0;
     int lh=heightt(root->left);
     if(lh==-1) return -1;
     int rh=heightt(root->right);
     if(rh==-1) return -1;
     
     if(abs(lh-rh)>1) return -1;
     
     return 1+max(lh,rh);
 }
  bool balance(Node* root){
     int i= heightt(root);
     return i!=-1;
 }
 int main(){
     cout<<"enter root element : ";
    Node* root=buildTree(); 
    bool balanced= balance(root);
    balanced?cout<<"Its a balanced Binary Tree":cout<<"It is not a Balanced Binary Tree";
    
     return 0;
 }