#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void FourSum(int n,vector<int> &a,int target)
{
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    
    for(int i=0;i<n;i++)
    {
        if(i>0 && a[i]==a[i-1]) continue;
        for(int j=i+1;j<n;j++)
        {
            if(j!=(i+1) && a[j]==a[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                long long sum=a[i];
                sum+=a[j];
                sum+=a[k];
                sum+=a[l];
               
                if(sum<target)
                k++;
                else if(sum>target)
                l--;
                else{ 
                    vector<int>temp={a[i],a[j],a[k],a[l]};
                    ans.push_back(temp);
                     k++;
                     l--;
                     
                    while(k<l && a[k]==a[k-1]) k++;
                    while(k<l && a[l]==a[l+1]) l--;
                    
                }
            }
        }
    }
   for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<"\n";
    }

}

int main()
{
    int n,e;
    vector<int> a;
    cout<<"enter number of elements ";
    cin>>n;
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    int target;
    cout<<"enter target sum ";
    cin>>target;
    
    FourSum(n,a,target);
    
    return 0;
}