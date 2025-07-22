#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    list<int>l1={1,2,3,4,5};
    l1.push_back(11);
    l1.push_front(0);
    l1.pop_back();
    l1.pop_front();
    for(auto x:l1)
    cout<<x;
    return 0;
}