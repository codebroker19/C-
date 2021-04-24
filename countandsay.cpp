#include<bits/stdc++.h>
using namespace std;
string countandsay(int n=1)
{
   if(n==1)
   return "1";
   if(n==2)
   return "11";
   string s="11";
   int t=" ";
   int c=0;
   for(int i=3;i<=n;i++)
   {   c=1;
   s=s+"&";
       for(int j=1;j<s.length();j++)
       {
           if(s[i]!=s[i-1])
           {
               t=t+to_string(c);
               t=t+s[i-1];
               c=1;
           }
           else
           {
               c++;
               s=t;
           }
           
       }
   }
   return s;
}