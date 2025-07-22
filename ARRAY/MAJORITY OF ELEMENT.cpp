#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void majorityelement(vector<int> &a,int n)
{
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]]++;
    }
    for(auto i:mpp)
    {
        if(i.second>(n/2))
        {
            cout<<"majority of element is : "<<i.first;
        }
    }
}

int main()
{
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    vector<int> a={};
    int e;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    majorityelement(a,n);
}