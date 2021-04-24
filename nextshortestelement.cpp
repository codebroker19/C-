#include<bits/stdc++.h>
using namespace std;
 void nextsmallestelement(int a[],int n)
 {
     stack<int>s;
     s.push(a[0]);
     for(int i=1;i<n;i++)
     {
         if(s.empty())
         {
             s.push(a[i]);
             continue;
         }
         while(!s.empty()&&s.top()>a[i])
         {
             cout<<s.top()<<"->"<<a[i]<<"\n";
             s.pop();
         }
         s.push(a[i]);
     }
     while(!s.empty())
     {
         cout<<s.top()<<"->"<<"-1"<<"\n";
         s.pop();
     }
 }
 int main()
 {
     int t,n;
     cout<<"Enter the number of testcases\n";
     cin>>t;
     while(t--)
     {   cout<<"Enter the number of elements\n";
         cin>>n;
         int a[n];
         cout<<"Enter the elements\n";
         for(int i=0;i<n;i++)
         {cin>>a[i];}
         nextsmallestelement(a,n);
     }
     return 0;
 }