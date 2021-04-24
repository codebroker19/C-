#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void subsequence(string t,int i,int n,string s)
{
    if(i==n)
    {cout<<t;
    return;}
    else
    {
        subsequence(t,i+1,n,s);
        t=t+s[i];
        subsequence(t,i+1,n,s);
    }
}
int main()
{
    string s;
    cin>>s;
    subsequence(" ",0,s.length(),s);
    return 0;

}