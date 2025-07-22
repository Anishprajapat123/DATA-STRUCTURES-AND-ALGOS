// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void kthmissing(int n,vector<int> &a,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=a[mid]-(mid+1);
        if(missing<k)
        low=mid+1;
        else
        high=mid-1;
    }
    cout<<k+high+1;
}

int main()
{
    int n,e,k;
    vector<int> a;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter the value of k : ";
    cin>>k;
    kthmissing(n,a,k);
    return 0;
}