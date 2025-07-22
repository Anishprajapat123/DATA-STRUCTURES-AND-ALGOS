#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotatematrix90degree(int n,vector<vector<int>> &a)
{
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          swap(a[i][j],a[j][i]);
      }
  }
  for(int i=0;i<n;i++)
  {
      reverse(a[i].begin(),a[i].end());
  }
}


int main()
{
    int v,n;
    cout<<"enter the rows ";
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    cout<<"enter values ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cin>>v;
        a[i][j]=v;
        
    }
    }
    rotatematrix90degree(n,a);
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<a[i][j];
       }
       cout<<"\n";
   }
    return 0;
}