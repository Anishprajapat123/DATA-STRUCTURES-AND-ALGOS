#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int noofdays(int items,vector<int> &a , int mid){
    int noofdays=1,load=0;
    for(int i=0;i<items;i++){
        if((load+a[i])<=mid)
        {
            load+=a[i];
        }
        else{
            noofdays++;
            load=a[i];
        }
    }
    return noofdays;
}


void leastCapacity(int items,vector<int> &a,int days){
    int maxi=0,totalweight=0;
    for(int i=0;i<items;i++){
        maxi=max(maxi,a[i]);
        totalweight+=a[i];
    }
    int low=maxi,high=totalweight;
    while(low<=high){
        int mid=(low+high)/2;
        if(noofdays(items,a,mid)<=days)
        {
            high=mid-1;
        }
        else{
            low= mid+1;
        }
    }
    cout<<"Least Capacity : "<<low;
    return;
}

int main(){
    int items,weights,days;
    vector<int> a;
    cout<<"enter the total no. of items : ";
    cin>>items;
    cout<<"enter weight of each item : ";
    for(int i=0;i<items;i++){
        cin>>weights;
        a.push_back(weights);
    }
    cout<<"enter number of days : ";
    cin>>days;
    leastCapacity(items,a,days);
    
}