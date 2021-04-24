#include<iostream>
using namespace std;
int division(int a,int b)
{
    if(b==0)
    throw 1;
    else
    {
        return a/b;
    }
    
}
int main()
{
    int x=10,y=3,z;
    try
    {   if(y==0)
    throw 1;
    else
    {
       z=division(x,y);
       cout<<z<<"\n";
    }
    }
    catch(int a)
    {
        cout<<a<<"\n";
    }
    return 0;
    
}