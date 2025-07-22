// Online C++ compiler to run C++ program online
#include<iostream>
#include<array>
using namespace std;
bool issorted(int a[],int size)
{
    if(size==0 || size==1)
    return true;
    if(a[0]>a[1])
    return false;
    return issorted(a+1,size-1);
}
int main(){
    int a[]={1,2,3,4};
    if(issorted(a,4))
    cout<<"sorted";
    else
    {
        cout<<"not sorted";
    }
    
}