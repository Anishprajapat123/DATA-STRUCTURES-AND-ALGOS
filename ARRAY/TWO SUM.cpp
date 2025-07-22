#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void twosum(vector<int> &a,int n,int target)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==target)
            {
                cout<<"("<<i<<","<<j<<")"<<"; ";
            }
        }
    }
    
}
int main() {
    int n;
    cout<<"enter number of elements in an array : ";
    cin>>n;
    vector<int> a={};
    int e;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    int target;
    cout<<"enter target sum : ";
    cin>>target;
    
    twosum(a,n,target);
    return 0;
}