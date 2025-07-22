#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countsumarraysum(int n,vector<int> &a,int k)
{
    unordered_map<int,int> mpp;
    mpp[0]=1;
    int presum=0,cnt=0;
    for(int i=0;i<a.size();i++)
    {
        presum+=a[i];
        int remove=presum-k;
        cnt+=mpp[remove];
        mpp[presum]+=1;
        
    }
    cout<<cnt;
}

int main()
{
    int v,n;
    cout<<"enter number of values ";
    cin>>n;
    vector<int> a;
    cout<<"enter values ";
    for(int i=0;i<n;i++)
    {
            cin>>v;
            a.push_back(v);
    }
    int k;
    cout<<"enter the sum ";
    cin>>k;
    countsumarraysum(n,a,k);
}