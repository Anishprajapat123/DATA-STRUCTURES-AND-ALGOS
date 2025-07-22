// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
void longestconsequence(int n,vector<int> &a)
{
    unordered_set<int> st;
    int longest=1;
    if(n==0)
    {
        longest=0;
    }
    else{
   
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    
    for(auto i:st)
    {
        if(st.find(i-1)==st.end())
        {
            int cnt=1;
            int x=i;
            while(st.find(x+1) != st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }
    }
    cout<<longest;
}

int main() {
    int n,v;
    vector<int> a;
    cout<<"enter number of values ";
    cin>>n;
    cout<<"enter values ";
    for(int i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
    }
    longestconsequence(n,a);
    
    return 0;
}