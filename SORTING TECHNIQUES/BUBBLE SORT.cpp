#include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
void bubblesort(int n,int arr[])
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}


 int main()
 {
     int n;
     cout<<"number of elements in an array : ";
     cin>>n;
     int arr[n];
     cout<<"enter elements : ";
     for(int i=0;i<n;i++)
     cin>>arr[i];
     bubblesort(n,arr);
     cout<<"elements after bubble sort : ";
     for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     
 }