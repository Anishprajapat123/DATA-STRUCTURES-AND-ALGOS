#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextper(int a,int n,vector<int> &b)
{
    int index=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(b[i]<b[i+1])
        {
            index=i;
            break;
        }
    }
    if(index==-1)
    {
        reverse(b.begin(),b.end());
    }
    else{
    for(int i=n-1;i>index;i--)
    {
        if(b[i]>b[index])
        {
            swap(b[i],b[index]);
            break;
        }
    }
    reverse(b.begin()+index+1,b.end());
    }
    
    for(auto i:b)
    cout<<i<<" ";
        
}


int main() {
   int a,n;
   vector<int> b={};
   cout<<"enter number of values";
   cin>>n;
   cout<<"enter values";
   for(int i=0;i<n;i++)
   {
       cin>>a;
       b.push_back(a);
   }
   nextper(a,n,b);
   

    return 0;
}