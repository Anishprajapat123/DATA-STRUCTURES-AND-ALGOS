// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstoccurence(int n,vector<int> &a,int x)
{
    int low=0,high=n-1;
    int first=-1;
    while(low<=high){
        int mid=((low+high)/2);
        if(a[mid]==x)
        {
            first=mid;
            high=mid-1;
        }
        else if(x<mid)
        high=mid-1;
        else
        low=mid+1;
    }
    return first;
}
int lastoccurence(int n,vector<int> &a,int x)
{
    int low=0,high=n-1;
    int last=-1;
    while(low<=high)
    {
        int mid=((low+high)/2);
        if(a[mid]==x)
        {
            last=mid;
            low=mid+1;
        }
        else if(x<a[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    return last;
}
void firstandlastoccurences(int n,vector<int> &a,int x)
{
    int first=firstoccurence(n,a,x);
    if(first==-1) {
        cout<<"-1 , -1"; 
        return;
    }
    int last=lastoccurence(n,a,x);
    cout<<first<<" and "<<last;
}

int main() {
    int n,e,x;
    vector<int> a;
    cout<<"enter no. of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter the target element : ";
    cin>>x;
    firstandlastoccurences(n,a,x);

    return 0;
}