#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &a,int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    
}

int main() {
    int n;
    cout<<"enter number of elements in an array : ";
    cin>>n;
    vector<int> a={};
    int e;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    sortArray(a,n);
    for(auto i:a)
    cout<<i<<" ";
    return 0;
}