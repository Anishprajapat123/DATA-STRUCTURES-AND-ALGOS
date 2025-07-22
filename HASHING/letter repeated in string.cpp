#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter string : ";
    cin>>s;
    
    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }
    int q;
    char c;
    cout<<"how many characters you want to fetch: ";
    cin>>q;
    cout<<"enter characters : ";
    while(q--)
    {
        cin>>c;
        cout <<hash[c]<<endl;
    }
}