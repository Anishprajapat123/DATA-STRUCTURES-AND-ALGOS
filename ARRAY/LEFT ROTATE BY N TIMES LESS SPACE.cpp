#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void leftrotate(vector<int> &arr,int n,int d)
{
   reverse(arr.begin(),arr.begin()+d);
   reverse(arr.begin()+d,arr.end());
   reverse(arr.begin(),arr.end());
   return;
   
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr={};
    int e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        arr.insert(arr.begin()+i,e);
    }
    int d;
    cin>>d;
    leftrotate(arr,n,d);
    for(auto i:arr)
    cout<<i<<" ";
    
}