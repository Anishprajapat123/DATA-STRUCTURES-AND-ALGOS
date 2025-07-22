// Online C++ compiler to run C++ program online
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int checksorted(vector<int> &arr,int n)
{
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            
        }
        else{
        return false;
            
        }
    }
    return true;

 }

int main()
{
    int n;
    cout<<"enter number of elements ";
    cin>>n;
    vector<int> arr={0};
    int e;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        arr.insert(arr.begin()+i,e);
    }
    int i=checksorted(arr,n);
    if(i)
    cout<<"array is sorted";
    else
    cout<<"array is not sorted";
}