#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs("My.txt");
    string str;
    int a;
    ifs>>str>>a;
    cout<<str<<"\n"<<a<<"\n";
    return 0;
    }