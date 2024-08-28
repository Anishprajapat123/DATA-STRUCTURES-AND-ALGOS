#include<iostream>
#include<array>
using namespace std;
int findsum(int a[],int size)
{
    if(size==0)
    return 0;
    return a[0]+findsum(a+1,size-1);
}
int main()
{
    int a[5];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=0;
    sum=findsum(a,5);
    cout<<sum;
    
}