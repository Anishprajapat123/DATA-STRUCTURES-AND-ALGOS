// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void searchelement(int n,vector<int> &a,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
       
        if(a[mid==x]) {cout<<mid;return;}
         if(a[low]==a[mid] && a[mid]==a[high])
        {
            low=low+1;
            high=high-1;
            continue;
        }
        if(a[low]<=a[mid])
        {
            if(a[low]<=x && x<=a[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else{
            if(a[mid]<=x && x<=a[high])
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
}

int main() {
    int n,e,x;
    vector<int> a;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter the target element : ";
    cin>>x;
    
    searchelement(n,a,x);

    return 0;
}