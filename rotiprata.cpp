#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int par,int mid)
{
int prata=0;
int time=0;
for(int i=0;i<n;i++)
{
    int j=2;
    time=a[i];
    if(time<=mid)
    {
        prata++;
        time=time+(a[i]*j);
        j++;
    }
    if(prata>=par)
    return 1;
}
return 0;
}

int main()
{
    int t,par;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>par;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        int start=0,end=1e9;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(solve(a,n,par,mid)==true)
            {
             ans=mid;
             end=mid-1;
            }
            else
            start=mid+1;
        }
        cout<<ans;
    }
    return 0;
}