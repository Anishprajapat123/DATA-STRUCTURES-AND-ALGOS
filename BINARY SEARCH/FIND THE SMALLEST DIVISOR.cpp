// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumofdivisor(int n,vector<int> &a,int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)a[i]/(double)mid);
    }
    return sum;
}

void smallestDivisor(int n,vector<int> &a,int threshold){
    int low=1,maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
    }
    int high=maxi;
    if(threshold<n) {cout<<"threshold is too small";
    }
    
    while(low<=high){
        int mid=(low+high)/2;
        if(sumofdivisor(n,a,mid)<=threshold){
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<low;
    return;
}

int main() {
    int n,e,threshold;
    vector<int> a;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    cout<<"enter threshold : ";
    cin>>threshold;
    smallestDivisor(n,a,threshold);

    return 0;
}