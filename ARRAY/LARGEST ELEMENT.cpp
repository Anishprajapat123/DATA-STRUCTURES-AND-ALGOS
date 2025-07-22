#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largestelement(vector<int> &arr,int n)
{
    int large=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large)
        large=arr[i];
    }
    return large;
}

int main(){
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    vector<int> arr={0};
    int e;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        arr.insert(arr.begin()+i,e);
    }
    int large=largestelement(arr,n);
    cout<<"largest element i"<<large;
}