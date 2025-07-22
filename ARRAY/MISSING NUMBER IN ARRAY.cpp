#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void missingNumber(vector<int> &a,int n)
{
    int xor1=0;
    int xor2=0;
    int N=n-1;
    for(int i=0;i<N;i++)
    {
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    int j=xor1^xor2;
    cout<<j;
}

int main() {
    int n;
    cout<<"number of elements in array : ";
    cin>>n;
    cout<<"enter the elements of array : ";
    vector<int> a={};
    int e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    
    missingNumber(a,n);

    return 0;
}
