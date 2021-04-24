#include<bits/stdc++.h>
using namespace std;
bool find(int a[],int n,int height,int mid)
{
    int sum=0;
    for(int i=0;i<n;i++)
{
    if(a[i]>=mid)
    {sum=sum+(a[i]-mid);}
}
if(sum>=height)
return true;
else
return false;
}
int main()
{
    int n,height;
    cin>>n>>height;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}int ans=0;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(find(a,n,height,mid)==true)
        {ans=mid;start=mid+1;}
        else
        end=mid-1;
    }
    return 0;
}