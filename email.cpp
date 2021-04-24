#include<iostream>

using namespace std;
int main()
{
    string s="debanshupanda2001@gmail.com";
    
    int i=(int)s.find('@');
    string uname=s.substr(0,i);
    cout<<"User name is "<<uname<<"\n";
    return 0;
}