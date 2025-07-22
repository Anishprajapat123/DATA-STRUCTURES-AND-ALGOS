// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
    int nu=1,d=1;
    for(int i=0;i<r;i++)
    {
        nu=nu*(n-i);
        d=d*(i+1);
    }
    int res=1;
    res=nu/d;
    return res;
}

void pascaltriangle(int n)
{
    int ans=1;
    int a=n;    
    for(int i=0;i<=n;i++)
    {
        for(int s=n;s>n-i-1;s--)
        {
            cout<<" ";
        }
        for(int j=1;j<=a;j++)
        {
            ans=ncr(a-1,j-1);
            cout<<ans<<" ";
        }
        cout<<"\n";
        a--;
    }
    
    
}

int main() {
   int n;
   cout<<"enter a number";
   cin>>n;
   pascaltriangle(n);

    return 0;
}