#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void LINEAR(vector<int> &arr,int n,int num)
{
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            temp.push_back(i);
            
        }
    }
    cout<<num<<" is at index ";
    for(auto i:temp)
    cout<<i<<" ";
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
    int num;
    cin>>num;
   LINEAR(arr,n,num);
    
    
}