// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void binarysearch(int n,vector<int> &a,int target,int low,int high)
{
    if(low>high) return;
    int mid=((low+high)/2);
    if(a[mid]==target) 
    {
        cout<<mid;
        return;
    }
    else if(target<mid) 
    {
        binarysearch(n,a,target,low,mid-1);
    }
    else 
    {
        binarysearch(n,a,target,mid+1,high);
    }    
    return ;
}

int main() {
    int n,e;
    vector<int> a;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    int target;
    cout<<"enter target : ";
    cin>>target;
    int low=0,high=n-1;
    binarysearch(n,a,target,low,high);
    return 0;
}