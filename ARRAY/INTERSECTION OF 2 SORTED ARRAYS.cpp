#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void intersectionof2array(vector<int> &a1,vector<int> &a2)
{
    int n1=a1.size();
    int n2=a2.size();
    int i=0;
    int j=0;
    vector<int> intersection={};
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
        i++;
        }
        else if(a2[j]<a1[i])
        {
        j++;
        }
        else{
            intersection.push_back(a1[i]);
            i++;
            j++;
        }
    }
    for(auto i:intersection){
    cout<<i<<" ";}
}

int main()
{
    int n;
    cout<<"enter size of an each array : ";
    cin>>n;
    vector<int> a1={};
    vector<int> a2={};
    int e;
    cout<<"enter elements of a1 : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a1.push_back(e);
    }
    cout<<"enter elements of a2 : ";
    for(int j=0;j<n;j++)
    {
        cin>>e;
        a2.push_back(e);
    }
    intersectionof2array(a1,a2);
    
}