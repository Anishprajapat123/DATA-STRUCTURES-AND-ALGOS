#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ThreeSum(int n,vector<int>&a,int target)
{
    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(i>0 && a[i]==a[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
        int sum=a[i]+a[j]+a[k];
        if(sum<target)
        j++;
        else if(sum>target)
        k--;
        else{
            vector<int>temp={a[i],a[j],a[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && a[j]==a[j+1]) j++;
            while(j<k && a[k]==a[k-1]) k--;
        }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
}

int main()
{
    int n,e;
    vector<int> a;
    cout<<"enter number of elemets ";
    cin>>n;
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    int target;
    cout<<"enter target sum ";
    cin>>target;
    ThreeSum(n,a,target);
    return 0;
}