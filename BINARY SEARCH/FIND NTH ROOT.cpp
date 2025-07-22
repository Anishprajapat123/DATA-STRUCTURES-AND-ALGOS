#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int mid,int n)
{
    int a=1;
    for(int i=0;i<n;i++)
    a=a*mid;
    return a;
}

int nthrt(int a,int n)
{
    int low=1,high=a;
    int ans=-1;
    if(a==1) return 1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int midn=func(mid,n);
        if(midn<=a){
            ans=mid;
            low=mid+1;
        }
        else  high=mid-1;
       
    }
    return ans;
}

int main()
{
    int a,n;
    cout<<"enter an number : ";
    cin>>a;
    cout<<"enter the nth root : ";
    cin>>n;
    int b=nthrt(a,n);
    cout<<b;
    
    return 0;
    
}