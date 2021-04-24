#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"Enter two numbers";
    cin>>n>>m;
    while(m!=n)
    {
        if(m>n)
        m=m-n;
        else
        {
            n=n-m;
        }
        
    }
    cout<<m;
    return 0;
}