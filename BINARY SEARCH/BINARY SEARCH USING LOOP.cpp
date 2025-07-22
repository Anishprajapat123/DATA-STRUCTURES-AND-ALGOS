// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void binarysearch(int n,vector<int> &a,int target)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=((low+high)/2);
        if(a[mid]==target) {
            cout<<mid;
            return;
        }
        else if(target < a[mid]) {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    
}

int main() {
    int n,e;
    vector<int> a;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    int target;
    cout<<"enter target : ";
    cin>>target;
  
    binarysearch(n,a,target);
    return 0;
}