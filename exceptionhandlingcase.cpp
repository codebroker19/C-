#include<iostream>
using namespace std;
int main()
{
    int a=0,b=45;
    float c;
    try{
        if(a==0)
        throw 1;
        c=b/a;
        cout<<c<<"\n";
    }
    catch (int d){
    cout<<"Unexpected error in declaring number"<<d<<"\n";}
    return 0;
}