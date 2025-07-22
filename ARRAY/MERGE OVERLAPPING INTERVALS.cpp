// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void MergeOverlappingIntervals(int n,vector<vector<int>> &a)
{
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        if(ans.empty() || a[i][0]>ans.back()[1])
        {
            ans.push_back(a[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],a[i][1]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() {
   int n,e;
   cout<<"enter number of intervals ";
   cin>>n;
   vector<vector<int>> a(n,vector<int>(2));
   cout<<"enter elements of intervals ";
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<2;j++)
       {
           cin>>e;
           a[i][j]=e;
       }
       
   }
  
    MergeOverlappingIntervals(n,a);
    return 0;
}