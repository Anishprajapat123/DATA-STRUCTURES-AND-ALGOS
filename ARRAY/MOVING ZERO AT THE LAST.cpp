#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void movingzeroatend(vector<int> &arr,int n)
{
    int temp[n]={0};
    int j=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
        temp[j]=arr[i];
        j++;
        }
        else
        {
        count++;
        }
    }
    for(int i=n-count;i<n;i++)
    temp[i]=0;
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr={};
    int e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        arr.insert(arr.begin()+i,e);
    }
    //int d;
    //cin>>d;
    movingzeroatend(arr,n);
    for(auto i:arr)
    cout<<i<<" ";
    
}