#include<bits/stdc++.h>
using namespace std;

bool isoperator(char c)
{
    switch(c)
    {
        case '+':
        return true;
        case '-':
        return true;
        case '*':
        return true;
        case '/':
        return true;
    }
    return false;
}

string postfixtoprefix(string exp)
{
    stack<string>s;
    for(int i=0;i<exp.length();i++)
    {
        if(isoperator(exp[i]))
        {
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            string temp=exp[i]+op2+op1;
            s.push(temp);
        }
        else
        {
            s.push(string(1,exp[i]));
        }
    }
    string ans="";
    while(!s.empty())
    {
     ans=ans+s.top();
     s.pop();
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<postfixtoprefix(s);
    return 0;
}