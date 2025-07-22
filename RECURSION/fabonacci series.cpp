#include<bits/stdc++.h>
using namespace std;
int fab(int i)
{
   
    if(i<=1) return 1; 
    
    return fab(i-1)+fab(i-2);
}


int main()
{
    int n;
    cin>>n;
    int v=fab(n);
    cout<<v;
}