// Online C++ compiler to run C++ program on
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>v1(5);
    vector<int>v2(5,100);
    printf("%d ",v.size());
    printf("%d ",v1.size());
    printf("%d ",v2.size());
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" "<<endl;
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    
    return 0;
}