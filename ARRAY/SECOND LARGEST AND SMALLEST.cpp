#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int secondlargestelement(vector<int> &arr,int n)
{
    int large=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large){
            slargest=large;
            large=arr[i];
        }
        else if(arr[i]<large && arr[i]>slargest)
         slargest=arr[i];
    }
    return slargest;
}

int secondsmallest(vector<int> &arr,int n)
{
    int small=arr[0];
    int ssmall=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            ssmall=small;
            small=arr[i];
        }
        else if(arr[i]!=small && arr[i]<ssmall)
        ssmall=arr[i];
    }
    return ssmall;
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
    int slarge=secondlargestelement(arr,n);
    cout<<"second largest element = "<<slarge<<endl;
    
    int ssmall=secondsmallest(arr,n);
    cout<<"second smallest element ="<<ssmall;
}