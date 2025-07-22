// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotated(int n,vector<int> &a)
{
    int low=1,high=n-2;
    if(n==1){cout<<a[0]; return;}
    if(a[0] != a[1]) {cout<<a[0]; return;}
    if(a[n-1] !=a[n-2]){cout<<a[n-1];return;}
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid-1]!=a[mid] && a[mid]!=a[mid+1]){
        cout<<a[mid]; return;}
        if(
            (mid%2==1) && (a[mid-1]==a[mid])
            || 
            (mid%2==0) && (a[mid]==a[mid+1])
            )
            low=mid+1;
            else
            high=mid-1;
    }
    
}

int main() {
    
    int n,e;
    vector<int> a;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    rotated(n,a);
    return 0;
}