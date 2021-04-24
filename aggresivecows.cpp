#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++)
        {cin>>a[i];}
        sort(a,a+n);
        int start=1;
        int end=1e9;
        int ans=0;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            int cow=1;
            int prev=a[0];
            for(int i=1;i<n;i++)
            {
                if(a[i]-prev>=mid)
                {
                    cow++;
                    prev=a[i];
                    if(c==cow)
                    break;
                }
            }
            if(c==cow)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}

