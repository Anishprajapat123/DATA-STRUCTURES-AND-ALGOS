#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void leftrotate(vector<int> &arr,int n,int d)
{
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
    temp[i]=arr[i];
    }
    
    for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
    
    for(int i=n-d;i<n;i++)
    arr[i]=temp[i-(n-d)];
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