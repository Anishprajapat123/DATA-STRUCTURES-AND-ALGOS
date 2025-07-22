// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMax(int n,vector<int> &a)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
    }
    return maxi;
}

int calculateTotalHrs(int n,vector<int> &a,int mid){
   int totalhrs=0;
   
    for(int i=0;i<n;i++){
        totalhrs+=ceil((double)a[i]/(double)mid);
        
    }
    return totalhrs;
}

void kokobananas(int n,vector<int> &a,int hrs){
   int low=1,high=findMax(n,a);
   
   while(low<=high)
   {
       int mid=(low+high)/2;
       int totalhrs=calculateTotalHrs(n,a,mid);
       if(totalhrs<=hrs)
       {
           high=mid-1;
       }
       else{
           low=mid+1;
       }
       
   }
   cout<<"min bananas per hrs = "<<low;
   
   return;
}

int main() {
    int n,e,hrs;
    vector<int> a;
    cout<<"enter the no. of columns of bananas : ";
    cin>>n;
    cout<<"enter bananas of each column : ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter the number of hours : ";
    cin>>hrs;
    kokobananas(n,a,hrs);
    return 0;
}