#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void MOVINGZEROATEND(vector<int> &arr,int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[j],arr[i]);
            j++;
        }
    }
    return;
    
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
    MOVINGZEROATEND(arr,n);
    for(auto i:arr)
    cout<<i<<" ";
    
}