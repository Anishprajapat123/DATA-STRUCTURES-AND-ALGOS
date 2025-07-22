#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rearrangeElementsSigns(vector<int> &a,int n)
{ 
    vector<int> pos={};
   vector<int> neg={};
   vector<int> b={};
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        pos.push_back(a[i]);
        else
        neg.push_back(a[i]);
    }
   
    if(pos.size()>neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
           b.push_back(pos[i]);
           b.push_back(neg[i]);
           
        }
        for(int j=neg.size();j<pos.size();j++)
        b.push_back(pos[j]);
        
    }
    else{
        for(int i=0;i<pos.size();i++)
        {
            b.push_back(pos[i]);
            b.push_back(neg[i]);
        }
        for(int j=pos.size();j<neg.size();j++)
        {
            b.push_back(neg[j]);
        }
    }
     for(auto i:b)
    cout<<i<<" ";
}
   
int main()
{
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int e;
    cout<<"enter elemnts : ";
    vector<int> a={};
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    rearrangeElementsSigns(a,n);
    
}