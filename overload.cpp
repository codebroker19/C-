#include<iostream>
using namespace std;
int max(int a=0,int b=0,int c=0)
{
    if(a>b&&a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}
int main()
{
    cout<<max(20,36)<<"\n";
    cout<<max(89,35,97)<<"\n";
    cout<<max(10,20)<<"\n";
    cout<<max()<<"\n";
}