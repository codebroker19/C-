#include<bits/stdc++.h>
using namespace std;
int min=99999;
string s ="";
void solve(int a,int vidx,vector<int>a1,vector<int>a2,int sum1,int sum2)
{

    if(a.length()==vidx)
    {
        int diff=abs(sum1-sum2);
        if(diff<min)
        min=diff;
        return;
    }
    if(a1.size()<(a.length()+1)/2)
    {
        s1.push_back(vidx);
        solve(a,vidx+1,a1,a2,sum1+a[vidx],sum2);
        s1.pop_back(set1.size()-1);
    }
    if(a2.size()<(a.length()+1)/2)
    {
        s2.push_back(vidx);
        solve(a,vidx+1,a1,a2,sum1,sum2+a[vidx]);
        s2.pop_back(set2.size()-1);
    }
}