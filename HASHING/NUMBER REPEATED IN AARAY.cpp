#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int hash[12]={0};
    
    for(int j=0;j<n;j++)
    {
        hash[arr[j]]+=1;
    }
    int q;
    cout<<"enter how many number you want to fetch :";
    cin>>q;
    int number;
    cout<<"enter the numbers: ";
    while(q--)
    {
        
        cin>>number;
        cout<<"number of "<<number<<" in array = ";
        cout<<hash[number]<<"\n";
    }
    return 0;
}