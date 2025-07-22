#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void unionof2array(vector<int> &a1,vector<int> &a2)
{
    int n1=a1.size();
    int n2=a2.size();
    int i=0;
    int j=0;
    vector<int> union1={};
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            if(union1.size()==0 || union1.back()!=a1[i])
            {
                union1.push_back(a1[i]);
                
            }
            i++;
            
        }
        else{
            if(union1.size()==0 || union1.back()!=a2[j] )
            {
                union1.push_back(a2[j]);
            }
            j++;
        }
    }
    while(j<n2)
    {
        if(union1.size()==0 || union1.back()!=a2[j])
        {
            union1.push_back(a2[j]);
        }
        j++;
    }
     while(i<n1)
    {
        if(union1.size()==0 || union1.back()!=a1[i])
        {
            union1.push_back(a1[i]);
        }
        i++;
    }
    
    for(auto i:union1)
    cout<<i<<" ";
}

int main()
{
    int n;
    cout<<"enter size of an each array : ";
    cin>>n;
    vector<int> a1={};
    vector<int> a2={};
    int e;
    cout<<"enter elements of a1 : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a1.push_back(e);
    }
    cout<<"enter elements of a2 : ";
    for(int j=0;j<n;j++)
    {
        cin>>e;
        a2.push_back(e);
    }
    unionof2array(a1,a2);
    
}