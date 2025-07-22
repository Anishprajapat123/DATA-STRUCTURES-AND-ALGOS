// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Kthelement(int n1,int n2,vector<int> &a1,vector<int> &a2,int k){
    vector<int> b;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            b.push_back(a1[i]);
            i++;
        }
        if(a2[j]<a1[i]){
            b.push_back(a2[j]);
            j++;
        }
        if(a1[i]==a2[j]){
            b.push_back(a1[i]);
            b.push_back(a2[j]);
            i++;
            j++;
        }
    }
    while(i<n1) {b.push_back(a1[i]); i++;}
     while(j<n2) {b.push_back(a2[j]); j++;}
    cout<<"the kth element : "<<b[k-1];
}

int main() {
   int n1,n2,e,k;
   vector<int> a1;
   vector<int> a2;
   cout<<"enter the number of elements in array 1 : ";
   cin>>n1;
    cout<<"enter the number of elements in array 2 : ";
   cin>>n2;
   cout<<"enter elements of array 1 : ";
   for(int i=0;i<n1+n2;i++){
       if(i<n1){
           cin>>e;
           a1.push_back(e);
       }
       else{
           if(i==n1) cout<<"enter elements of array 2 : ";
           cin>>e;
           a2.push_back(e);
       }
       
       
   }
   cout<<"enter kth element : ";
   cin>>k;
   Kthelement(n1,n2,a1,a2,k);
   

    return 0;
}