#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 5;
    }
    catch(int a)
    {
        cout<<"Throw exception"<<a<<"\n";
    }
    catch(double a)
    {
        cout<<"Throw double"<<a<<"\n";
    }
    catch(...)
    {
        cout<<"All catch"<<"\n";
    }
    return 0;
    
}