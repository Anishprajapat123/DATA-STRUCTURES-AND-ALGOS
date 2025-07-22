// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void spiraltraverseofmatrix(int n,vector<vector<int>> &a)
{
    int left=0,right=n-1;
    int top=0,bottom=n-1;
    vector<int> ans;
    
    while(top<=bottom && left<=right)
    {
         for(int i=left;i<=right;i++)
        {
            ans.push_back(a[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(a[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--)
            {
                ans.push_back(a[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(a[bottom][left]);
            }
            left++;
        }
    }
    for(auto i:ans)
    cout<<i;
    
}

int main() {
    int v,n;
    cout<<"enter the number of rows ";
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    cout<<"enter the values ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v;
            a[i][j]=v;
        }
    }
    spiraltraverseofmatrix(n,a);

    return 0;
}