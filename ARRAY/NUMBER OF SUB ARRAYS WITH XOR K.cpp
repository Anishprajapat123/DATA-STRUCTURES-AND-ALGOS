#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subArrayWithSumK(int n,vector<int> &a,int k)
{
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        xr=xr^a[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    cout<<cnt;
}

int main()
{
    int n,e,k;
    vector<int>a;
    cout<<"enter number of elements ";
    cin>>n;
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter target sum ";
    cin>>k;
    subArrayWithSumK(n,a,k);
    
    return 0;
}