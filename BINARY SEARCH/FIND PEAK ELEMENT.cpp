// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void peakelement(int n,vector<int> &a)
{
    int low=1,high=n-2;
    if(n==1){cout<<0; return;}
    if(a[0]>a[1]){cout<<0; return;}
    if(a[n-1]>a[n-2]){cout<<n-1;return;}
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
            cout<<mid;
            return;
        }
        else if(a[mid]>a[mid-1]){ 
            low=mid+1;
            
        }
        else {
            high=mid-1;
            
        }
    }
}

int main() {
    int n,e;
    vector<int> a;
    cout<<"enter no. of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    peakelement(n,a);
    return 0;
}