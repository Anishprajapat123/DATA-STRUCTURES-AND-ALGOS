// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Median(int n1,int n2,vector<int> &a1,vector<int> &a2){
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
    int mid=(b.size()-1)/2;
    if(b.size()%2==0){
        double median1=((double)b[mid]+(double)b[mid+1])/2;
        cout<<"the median = "<<median1;
        
    }
        else{
            cout<<"the median = "<<mid;
        }
    
}

int main() {
   int n1,n2,e;
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
   Median(n1,n2,a1,a2);
   

    return 0;
}