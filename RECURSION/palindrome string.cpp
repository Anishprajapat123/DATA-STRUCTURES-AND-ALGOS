using namespace std;
bool f(int i,string s)
{
    if(i>=s.length()/2) return 1;
    if(s[i]!=s[s.length()-i-1]) return 0;
    return f(i+1,s);
}

int main()
{
    string s;
    cin>>s;
    bool v=f(0,s);
    if(v)
    {
        cout<<" it is a palindrome";
    }
    else
    cout<<"it is not a palindrome";
}