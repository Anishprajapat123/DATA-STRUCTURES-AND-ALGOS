#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main()
{
   int n;
   cout<<"enter number of elements : ";
   cin>>n;
   int arr[n];
   cout<<"enter elements : ";
   for(int i=0;i<n;i++)
   cin>>arr[i];
   insertionsort(n,arr);
   cout<<"array after insertion sort : ";
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
}