#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canWePlace(int n, vector<int> &a,int k, int mid){
    int cntCows=1, last=a[0];
    for(int i=0;i<n;i++){
        if(a[i]-last >=mid){
            cntCows++;
            last=a[i];
        }
        if(cntCows==k) return true;
    }
    return false;
}

void AggressiveCows(int n,vector<int> &a,int k)
{
    sort(a.begin(),a.end());
    int low=1,high=a[n-1]-a[0];
    for(int i=0;i<n;i++){
        int mid=(low+high)/2;
        if(canWePlace(n,a,k,mid)==true){
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<"maximum min distance : "<<high;
}

int main(){
    int n,e,k;
    vector<int> a;
    cout<<"enter no. of remaining stalls : ";
    cin>>n;
    cout<<"enter stalls no. : ";
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter number of cows : ";
    cin>>k;
    AggressiveCows(n,a,k);
    return 0;
}