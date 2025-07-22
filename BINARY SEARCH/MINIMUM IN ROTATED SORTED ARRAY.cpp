// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void minimumelement(int n,vector<int> &a)
{
   int low=0,high=n-1,ans=INT_MAX;
   while(low<=high)
   {
       int mid=(low+high)/2;
       if(a[low]<=a[mid])
       {
           ans=min(ans,a[low]);
           low=mid+1;
       }
       else{
           high=mid-1;
           ans=min(ans,a[mid]);
       }
   }
   cout<<ans;
}

int main() {
    int n,e;
    vector<int> a;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    
    minimumelement(n,a);

    return 0;
}