#include<iostream>
#include <cstring>
using namespace std;
void removex(char input[])
{
    int l=strlen(input);
    if(l==0)
    return;
    if(input[0]=='x')
    {
        for(int i=0;i<l;i++)
        input[i]=input[i+1];
        removex(input);
    }
    else
    {
        removex(input+1);
    }
}
int main()
{
   char input[100];
   cin>>input;
   removex(input);
   cout<<input;
   
    
    
}