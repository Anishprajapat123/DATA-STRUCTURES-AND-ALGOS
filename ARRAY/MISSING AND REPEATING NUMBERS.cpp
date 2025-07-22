#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findMissingAndRepeatingNumbers(int n,vector<int> &a)
{
    int p=0;
    
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[a[i]]++;
    }
    for(int i=0;i<n+1;i++)
    {
        if(hash[i]==2)
        {
            cout<<i<<" is repeating \n";
        }
        if(hash[i]==0)
        {
            cout<<i<<" is missing \n";
        }
        
    }
}

int main()
{
    int n,e;
    vector<int> a;
    cout<<"enter number of elements ";
    cin>>n;
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    
    
    findMissingAndRepeatingNumbers(n,a);
    return 0;
}