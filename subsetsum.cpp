h#include<bits/stdc++.h>
using namespace std;

void solve(int *a,int start,int end,vector<int>&v)
{
int sum=0;
int n=end-start+1;
for(int i=0;i<(1<<n);i++)
{
    sum=0;
    int j=start;
    int x=i;
    while(x)
    {
        int l=x&1;
        if(l)
        sum=sum+a[j];
        j++;
        x=x>>1;
    }
    cout<<v;
}
}

int main()
{
    int n,a,b,count=0;
    cin>>n>>a>>b;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    vector<int>v1,v2;
    solve(a,0,n/2-1,v1);
    solve(a,n/2,n-1,v2);
    sort(v2.begin(),v2.end());
    int count=0;
    for(int i=0;i<v1.size();i++)
    {
        int low=lower_bound(v2.begin(),v2.end(),a-v1[i])-v2.begin();
        int high=upper_bound(v1.begin(),v1.end(),a-v2[i])-v1.begin();
        count=count+(low-high);
    }
    cout<<count;
    return 0;
}
//1<<n=2^n bitwise operator