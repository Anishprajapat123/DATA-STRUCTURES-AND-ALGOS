#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int allBooks(int n,vector<int> &a,int k, int mid){
    int cntStudents=1,page=0;
    for(int i=0;i<n;i++){
        if((a[i]+page)<=mid){
            page+=a[i];
        }
        else{
            cntStudents++;
            page=a[i];
        }
        
    }
    return cntStudents;
}

void allocateBooks(int n, vector<int> &a,int k){
     int maxi=INT_MIN,sumi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
        sumi=sumi+a[i];
    }
    int low=maxi,high=sumi;
    while(low<=high){
        int mid=(low+high)/2;
        int students=allBooks(n,a,k,mid);
        if(students>k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<low;
    return;
}

int main(){
    int n,e,k;
    vector<int> a;
    cout<<"enter the no. of books : ";
    cin>>n;
    cout<<"enter no. of pages for each for each book : ";
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter no. of students : ";
    cin>>k;
    
    allocateBooks(n,a,k);
    
    return 0;
    
}