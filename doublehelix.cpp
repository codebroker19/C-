#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=0;
    
      int n,n1;
      cin>>n>>n1;
      int a[n];
      int a1[n1];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<n1;i++)
      {
          cin>>a1[i];
      }
      int sum=0,sum1=0;
      int i=0,j=0;
      while(i<n&&j<n1)
      {
          if(a[i]<a1[j])
          sum=sum+a[i++];
          else if(a[i]>a1[j])
          sum1=sum1+a1[j++];
          else
          {
              x=x+max(sum,sum1)+a[i];
              sum=sum1=0;
              i++;j++;
          }
      }
      while(i<n)
      {sum=sum+a[i++];}
      while(j<n1)
      {sum1=sum1+a1[j++];}
      
     x=x+max(sum,sum1);
     cout<<x<<"\n";

    
    return 0;
}