// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void generate(string abtak,int open,int close,vector <string> &s)
{
    if(open==0 && close==0)
    {
        s.push_back(abtak);
        return;
    }
    if(open>0)
    generate(abtak+"(",open-1,close, s);
    if(close>0 && open<close)
    generate(abtak+")",open,close-1, s);
}
int main() {
    int n;
    vector<string> s;
    cout<<"enter a number"<<endl;
    cin>>n;
    generate(" ",n,n,s);
    for(int i=0;i<n;i++)
    cout<<s[i]<<endl;
    return 0;
}