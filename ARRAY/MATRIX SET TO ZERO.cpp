#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void matrixsettozero(int n,vector<vector<int>> &a)
{
    int row[n]={};
    int column[n]={};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                row[i]=1;
                column[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i] || column[j])
            {
                a[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    
}

int main()
{
    int v,n;
    
    cout<<"enter number of rows ";
    cin>>n;
    vector<vector<int>> a(n, vector<int>(n));
    cout<<"enter values ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v;
            a[i][j]=v;
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"matrix set to zero \n";
    matrixsettozero( n, a);
    
    return 0;
}