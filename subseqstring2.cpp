// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void subseq(string original,string tillnow)
{
    if(original.size()==0){
    cout<<tillnow<<endl;
    return;}
    subseq(original.substr(1),tillnow+original[0]);
    subseq(original.substr(1),tillnow);
    
}
int main() {
    string original;
    cin>>original;
    subseq(original," ");

    return 0;
}

//using index
#include <iostream>
using namespace std;
void sub(int index,string original,string tillnow)
{
    if(index==original.size())
    {
        cout<<tillnow<<endl;
        return;
    }
    sub(index+1,original,tillnow+original[index]);
    sub(index+1,original,tillnow);
}
int main() {
    string original;
    cin>>original;
    sub(0,original," ");

    return 0;
}