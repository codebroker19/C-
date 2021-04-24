#include<bits/stdc++.h>
#include<stack>
using namespace std;
stack<int>s;
void insertatbottom(int x)
{
    if(s.empty())
    {
        s.push(x);
    }
    else
    {
        int a=s.top();
        s.pop();
        insertatbottom(x);
        s.push(a);
    }
}
void reverse()
{
    if(s.size()==0)
    return ;
    if(s.size()>0)
    {
        int x=s.top();
        s.pop();
        reverse();
        insertatbottom(x);
    }
}
int main()
{
    string ns;
int n,a;
s.push(1);
s.push(10);s.push(156);s.push(145);s.push(158);
reverse();
 while(!s.empty())
    {
        char p=s.top();
        s.pop();
        ns+=p;
    }
  
return 0;
}
