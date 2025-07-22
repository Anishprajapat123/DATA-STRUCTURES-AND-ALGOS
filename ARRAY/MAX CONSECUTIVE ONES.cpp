#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void maxConsecutiveOnes(vector<int> &a,int n)
{
    int count=0;
    int maxi=0;
  
    for(int i=0;i<n;i++)
    {
       if(a[i]==1)
       {
           count++;
            maxi=max(maxi,count);
          
       }
       else
       {
           maxi=max(maxi,count);
           count=0;
       }
    }
    
    cout<<maxi;
    
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
    
    maxConsecutiveOnes(a,n);

    return 0;
}
