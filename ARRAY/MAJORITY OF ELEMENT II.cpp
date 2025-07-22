#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void majorityelements(int n, vector<int> &a)
{
    int b,m=0;
    vector<int> ans={0};
     int s=(n/3);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=ans[0])
        {
        b=1;
        
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b++;
            }
        }
        if(b>s)
        {
            if(m==0){
           ans[m]=a[i];
           m++;
            }
            else{
                ans.push_back(a[i]);
            }
        }
        }
    }
    
    for(auto i:ans)
    cout<<i<<" ";
}

int main()
{
    vector<int> a;
    int n,e;
    cout<<"Enter the number of elements ";
    cin>>n;
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    majorityelements(n,a);
    return 0;
}