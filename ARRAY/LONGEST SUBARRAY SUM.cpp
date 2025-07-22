#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void longestsubsequentsum(vector<int> &a,int n,long long s)
{
   int left=0;int right=0;
   long long sum=a[0];
   int maxLen=0;
   while(right<n)
   {
       while(left<=right && sum>s)
       {
           sum-=a[left];
           left++;
       }
       if(sum==s)
       {
           maxLen=max(maxLen,right-left+1);
       }
       right++;
       if(right<n) sum+=a[right];
   }
    cout<<maxLen;  
}

int main()
{
    int n;
    cout<<"enter length of array : ";
    cin>>n;
    vector<int> a={};
    int e;
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    long long s;
    cout<<"the sum should be equal to : ";
    cin>>s;
    longestsubsequentsum(a,n,s);
}