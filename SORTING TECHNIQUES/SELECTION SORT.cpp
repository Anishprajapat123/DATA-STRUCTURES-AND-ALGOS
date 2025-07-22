#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i;j<n;j++)
        {
        if(arr[j]<arr[mini])
        mini=j;
        }
        swap(arr[i],arr[mini]);
    }
   
}

int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    cout<<"enter "<<n<<" elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    selectionsort(n,arr);
    cout<<"elements after selection sort : ";
    for(int j=0;j<n;j++)
    cout<<arr[j]<<" ";
}