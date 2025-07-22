// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void countInversion(int n,vector<int> &a)
{
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                b.push_back(a[i]);
                b.push_back(a[j]);
            }
        }
    }
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<",";
        i++;
        cout<<b[i]<<"\n";
    }
    int total=(b.size())/2;
    
    cout<<"total number of count inversions = "<<total;
}

int main() {
    int n,e;
    vector<int>a;
    cout<<"enter number of elements ";
    cin>>n;
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    countInversion(n,a);
    return 0;
}