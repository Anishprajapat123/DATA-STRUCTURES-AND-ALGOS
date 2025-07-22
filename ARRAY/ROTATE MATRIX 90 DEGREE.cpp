#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotatematrix90degree(int n,vector<vector<int>> &a)
{
    vector<vector<int>> b(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[j][n-i-1]=a[i][j];
        }    
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j];
        }   
        cout<<"\n";
    }
}

int main()
{
    int v,n;
    cout<<"enter the rows ";
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    cout<<"enter values";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cin>>v;
        a[i][j]=v;
        
    }
    }
    rotatematrix90degree(n,a);
    return 0;
}