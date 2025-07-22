#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MergeSortedArrays(int n1,int n2,vector<int> &a,vector<int> &b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int p=n1-1,q=0;
    while(p>=0 && q<n2)
    {
        if(a[p]>b[q])
        {
            swap(a[p],b[q]);
            p--;q++;
        }
        else{break;};
    }
    
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   
    for(auto i:a)
    cout<<i;
    cout<<"\n";
    for(auto i:b)
    cout<<i;
}

 int main()
 {
     int n1,n2,e1,e2;
     vector<int> a;
     vector<int> b;
     cout<<"enter number of elements in array 1 ";
     cin>>n1;
     cout<<"enter elements of array 1 ";
     for(int i=0;i<n1;i++)
     {
         cin>>e1;
         a.push_back(e1);
     }
      cout<<"enter number of elements in array 2 ";
     cin>>n2;
      cout<<"enter elements of array 2 ";
     for(int i=0;i<n2;i++)
     {
         cin>>e2;
         b.push_back(e2);
     }
     
     MergeSortedArrays(n1,n2,a,b);
     return 0;
 }