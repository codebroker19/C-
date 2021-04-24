#include<bits/stdc++.h>
using namespace std;

int rotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
    return 0;
    string temp=s1+s1;
    return (temp.find(s2)!=string::npos);
}
int main()
{
    string str1 = "AACD", str2 = "ACDA"; 
   if (rotation(str1, str2)) 
     printf("Strings are rotations of each other"); 
   else
      printf("Strings are not rotations of each other"); 
   return 0; 
}