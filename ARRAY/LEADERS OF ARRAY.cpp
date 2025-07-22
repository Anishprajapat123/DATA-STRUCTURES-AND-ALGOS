#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leadersofarray(int n,vector<int> &a)
{
    vector<int> ans;
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>max)
        {
            ans.push_back(a[i]);
            max=a[i];
        }
    }

    for(auto i:ans)
    cout<<i<<" ";
    
}

int main()
{
    int v,n;
    vector<int> a;
    cout<<"enter the number of values ";
    cin>>n;
    cout<<"enter the values ";
    for(int i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
    }
    leadersofarray(n,a);
}