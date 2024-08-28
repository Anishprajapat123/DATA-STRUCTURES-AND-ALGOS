#include <iostream>
#include<array>
using namespace std;
int main() {
    // Write C++ code here
    array<int,6>a={10,20,30,40,50,60};
    array<int,6>::iterator rt;
    //for(int i=0;i<6;i++)
   // cout<<a.at(i)<<" ";
  // for(it=a.begin();it!=a.end();it++)
   // *it=*it+1;
    //cout<<endl;
   // for(int x:a)
    //cout<<x<<" ";
    array<int,6>::reverse_iterator it;
    for(it=a.rbegin();it!=a.rend();it++)
    cout<<*it<<" ";
    
    return 0;
}