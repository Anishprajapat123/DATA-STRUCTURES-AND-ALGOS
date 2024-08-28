#include<array>
#include<iostream>
using namespace std;
void main()
{
     array<int,6>a={10,20,30,40,50,60};
     for(int i=0;i<6;i++)
     {
             cout<<a[i];
     }
	
    cout<<a.max_size();
}