#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void numberAppearsOnes(vector<int> &a,int n)
{
    int xor1=0;
    for(int i=0;i<n;i++)
    xor1=xor1^a[i];
    cout<<xor1;
    
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
    
    numberAppearsOnes(a,n);

    return 0;
}
