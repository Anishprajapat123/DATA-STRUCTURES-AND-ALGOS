#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool noofbouquets(int n,vector<int> &a,int m,int k,int mid){
    int count=0;
    int noofb=0;
    for(int i=0;i<n;i++){
        if(a[i]<=mid){
            count++;
        }
        else{
            noofb+=(count/k);
            count=0;
        }
    }
    noofb+=(count/k);
    return noofb>=m;
}

void minimumdays(int n,vector<int> &a,int m,int k){
    int v=m*k;
    if(v>n) {cout<<"limit exceeeded";return;}
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini= min(mini,a[i]);
        maxi= max(maxi,a[i]);
    }
    int low=mini,high=maxi; 
    while(low<=high){
        int mid=(low+high)/2;
        if(noofbouquets(n,a,m,k,mid)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low;
    return;
    
}


int main(){
    int n,e,m,k;
    vector<int> a;
    cout<<"enter no. of columns : ";
    cin>>n;
    cout<<"enter no. of flowers for each column : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter no. bouquets : ";
    cin>>m;
    cout<<"enter no. of flowers in each bouquets : ";
    cin>>k;
    minimumdays(n,a,m,k);
    
    return 0;
}