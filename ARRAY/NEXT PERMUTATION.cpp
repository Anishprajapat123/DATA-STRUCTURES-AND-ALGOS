// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextper(int a,int n,vector<int> &b)
{
    next_permutation(b.begin(),b.end());
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