#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countsumarraysum(int n,vector<int> &a,int k)
{
    int cnt=0;
   
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=a[i];
        
        if(a[i]==k)
        {
        cnt++;
        }
        
        for(int j=i+1;j<n;j++)
        {
            s=s+a[j];
            if(s==k)
            {
            cnt++;
            }
        }
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