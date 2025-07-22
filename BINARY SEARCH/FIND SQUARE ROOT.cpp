#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int squarert(int n)
{
    int low=1,high=n;
    int ans=-1;
    if(n==1) return 1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
            
        }
        else  high=mid-1;
       
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter an number : ";
    cin>>n;
    int a=squarert(n);
    cout<<a;
    
    return 0;
    
}