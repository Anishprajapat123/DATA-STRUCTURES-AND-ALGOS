// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotated(int n,vector<int> &a)
{
    int low=0,high=n-1;
    int ans=INT_MAX;
    int index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[low]<=a[high])
        {
            if(a[low]<ans)
            {
                ans=a[low];
            }
            break;
        }
        if(a[low]<=a[mid])
        {
            if(a[low]<ans)
            ans=a[low];
            low=mid+1;
        }
        else{
            high=mid-1;
            if(a[mid]<ans)
            {
                ans=a[mid];
            }
        }
    }
    cout<<ans;
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