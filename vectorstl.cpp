#include<iostream>
#include<list>
using namespace std;
int main()
{
vector<int> v={10,50,63,98,85};
v.push_back(20);
v.push_back(56);
vector<int>::iterator i;
for(i=v.begin();i!=v.end();i++)
{
cout<<*i<<"\n";
}
return 0;
}