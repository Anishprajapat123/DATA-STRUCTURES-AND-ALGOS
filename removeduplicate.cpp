#include<cstring>
using namespace std;
void removecontiguousduplicate(char input[])
{
    int l;
    l=strlen(input);
    if(l==0 || l==1)
    return;
    else if(input[0]==input[1])
    {
        for(int i=1;i<=l;i++)
        {
            input[i-1]=input[i];
            
            
        }
        removecontiguousduplicate(input);
        
    }
    else
    {
        removecontiguousduplicate(input+1);
    }
    
}
int main()
{
    char input[100];
    cin>>input;
    removecontiguousduplicate(input);
    cout<<input;
    
}