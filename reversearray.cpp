#include<iostream>
#include<array>
using namespace std;
int swap(int a[],int size)
{
    int temp;
    if(size==0 ||size==1)
    return 0;
    temp=a[0];
    a[0]=a[size-1];
    a[size-1]=temp;
    return swap(a+1,size-2);
    
}
int main()
{
    int a[5]={1,2,3,4,5};
    swap(a,5);
    for(int i=0;i<5;i++)
    cout<<a[i];
    
    
}