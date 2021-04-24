#include<bits/stdc++.h>
using namespace std;
 int countall(char s[1000],int n)
 {
     int count0=0,count1=0,count=0;
     for(int i=0;i<n;i++)
     {
         if(s[i]=='0')
         count0++;
         else if(s[i]=='1')
         count1++;
         if(count0==count1)
         count++;
     }
     if(count0!=count1)
     return -1;
     else
     return count;
 }
 int main() 
{ 
    char s[10000];
    cin>>s; 
    int n = strlen(s); 
  
    cout << countall(s, n); 
  
    return 0; 
} 